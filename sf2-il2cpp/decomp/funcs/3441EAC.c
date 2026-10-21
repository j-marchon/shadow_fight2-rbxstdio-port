// Nekki.SF2.GUI.Dialogs.DownloadingScreen$$BBCNAEPHINN @ RVA 0x3441EAC

System_Collections_IEnumerator_o *
Nekki_SF2_GUI_Dialogs_DownloadingScreen__BBCNAEPHINN
          (Nekki_SF2_GUI_Dialogs_DownloadingScreen_o *__this,float LFJGFLNMBMC,
          System_Action_o *CPECAEHDDDB,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((DAT_04568229 & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_TypeInfo);
    DAT_04568229 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_DownloadingScreen_PMCOLFHGIDP_TypeInfo);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  *(float *)&__this_00[2].klass = LFJGFLNMBMC;
  __this_00[2].monitor = CPECAEHDDDB;
  thunk_FUN_01c20e04(&__this_00[2].monitor,CPECAEHDDDB);
  return (System_Collections_IEnumerator_o *)__this_00;
}

