TEX_FILES_0 = GlueX_nim gluex_experiment beamline solenoid detector_overview \
	tracking_detectors calorimeters scintillators controls online \
	reconstruction simulation performance summary authors target \
	tracking_performance trigger daq symbols
TEX_FILES = $(addsuffix .tex,$(TEX_FILES_0)) # add .tex suffix

PS_FILES_0 =
PS_FILES = $(addsuffix .ps,$(PS_FILES_0)) # add .ps suffix

EPS_FILES_0 =
EPS_FILES = $(addsuffix .eps,$(EPS_FILES_0)) # add .eps suffix

FILES = figures/Draw_beamline.png figures/harp-x-767755.pdf figures/harp-y-767755.pdf figures/gx3102_pi0etaAsym2016_fig0_beam.pdf \
              figures/JD70-8-study1_4_sigma.png figures/BEAM_taggerplot.pdf figures/TAGM_conceptual.pdf figures/BEAM_taggerdetectors.pdf \
              figures/Attenuation.pdf figures/bcal_assemblies.pdf figures/FCAL_single_module.png figures/fit_BCAL_energy_resolution_sigma.pdf \
              figures/GlueX_CSS_overview.png figures/DAQ_coda.pdf figures/gluex_spectrometer_drawing_01_bw.pdf figures/GlueX-graphic.jpg \
              figures/CEBAF-graphic.png figures/gluex_spectrometer_drawing_01_bw.pdf figures/online_monitoring_processes.pdf figures/online_monitoring_PID.pdf \
              figures/online_monitoring_PID.pdf figures/MissingOmegaFit.pdf figures/ThreePiFit.pdf figures/PiPlusEfficiency.pdf figures/PiMinusEfficiency.pdf \
              figures/OmegaCompareE.pdf figures/OmegaCompareTheta.pdf figures/plot_CostheEff_NIM_jun19.pdf figures/gluex_nim_kfit_prob.pdf \
              figures/gluex_nim_PiMinus_PxPull.pdf figures/gluex_nim_PiMinus_PyPull.pdf figures/gluex_nim_PiMinus_PzPull.pdf figures/gluex_nim_pullspx_pulls_mean_data.pdf \
			  figures/gluex_nim_pullspy_pulls_mean_data.pdf figures/gluex_nim_pullspz_pulls_mean_data.pdf figures/gluex_nim_pullspx_pulls_mean_mc.pdf \
              figures/gluex_nim_pullspy_pulls_mean_mc.pdf figures/gluex_nim_pullspz_pulls_mean_mc.pdf figures/gluex_nim_pullspx_pulls_sigma_data.pdf \
              figures/gluex_nim_pullspy_pulls_sigma_data.pdf figures/gluex_nim_pullspz_pulls_sigma_data.pdf figures/gluex_nim_pullspx_pulls_sigma_mc.pdf \
              figures/gluex_nim_pullspy_pulls_sigma_mc.pdf figures/gluex_nim_pullspz_pulls_sigma_mc.pdf figures/omega_inv_mass_probCut_001.pdf \
              figures/kskpi_mass_spect.pdf figures/kskpi_mass_resol.pdf figures/XimMass_2017-ver30.pdf figures/jpsi_mass.pdf figures/cdc_pos_dedx.pdf \
              figures/cdc_dedx.pdf figures/bcal_deltat_resol.pdf figures/fcal_deltat_resol.pdf figures/tof_deltat_resol.pdf figures/fcal_ep.pdf \
              figures/bcal_ep.pdf figures/rate_vs_nthread.pdf figures/production_overview.png figures/production_offsite_rate_vs_nthreads_NERSC.pdf \
              figures/production_offsite_rate_vs_nthreads_PSC.pdf figures/start_counter_all.pdf figures/mt_diff_fullTOF.pdf figures/st_tr_fit.pdf \
              figures/st_dedx_vs_p.pdf figures/beta_vs_p_positivetracks.pdf figures/TOF_postracks_2000mev.pdf figures/TOF_postracks_4000mev.pdf \
              figures/MonteCarlo_flow.pdf figures/mcwrapper_submit_form.png figures/mcwrapper_dashboard_redacted.png figures/solenoid_field_calc-meas_comparison_7_1_01.pdf \
              figures/plot_rcdb3_phaseI.pdf figures/TargetSchematic3.pdf figures/GluexCell_mm.pdf figures/CDC_schematic.pdf figures/CDC_stereotubes.jpg \
              figures/FDC_OneCell.jpg figures/FDC_OneCell2.png figures/FDC_wires_from_strips1.pdf figures/PionMomentumResolution.pdf \
              figures/ProtonMomentumResolution.pdf figures/PionThetaResolution.pdf figures/PionPhiResolution.pdf figures/ZVertex.pdf \
              figures/125_Somov-f1.pdf figures/plot_triggerL1_c1.pdf figures/fit_FCAL_energy_resolution_sigma.pdf

C_FILES_0 =
C_FILES = $(addsuffix .C,$(C_FILES_0)) # add .C suffix


all : GlueX_nim.pdf

GlueX_nim.pdf : $(TEX_FILES) $(FILES) GlueX_nim.bbl
	pdflatex -interaction=nonstopmode GlueX_nim
	pdflatex -interaction=nonstopmode GlueX_nim

GlueX_nim.bbl : GlueX_nim.bib $(TEX_FILES)
	pdflatex -interaction=nonstopmode GlueX_nim
	bibtex GlueX_nim

GlueX_nim.aux:
	pdflatex -interaction=nonstopmode GlueX_nim

tar : $(TEX_FILES) $(FILES) # tar files; will remove old tar files
		rm -f GlueX_nim.tar
		rm -f GlueX_nim.tar.gz
		rm -rf GlueX_nim
		mkdir GlueX_nim
		mkdir GlueX_nim/figures
		cp GlueX_nim.bib GlueX_nim
#		cp GlueX_nim.bbl GlueX_nim
		cp $(TEX_FILES) GlueX_nim
		cp $(FILES) GlueX_nim/figures
#		cp $(C_FILES) GlueX_nim
		cp GlueX_nim.pdf GlueX_nim
		cp Makefile GlueX_nim
		tar cvf GlueX_nim.tar GlueX_nim
		gzip GlueX_nim.tar
# copy auxiliary files after tar file is made
		cp elsarticle-num-modified.bst GlueX_nim
#		rm -rf GlueX_nim
