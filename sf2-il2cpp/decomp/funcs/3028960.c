// Nekki.SF2.GUI.Dialogs.Raids.RaidDailyTaskCell$$HBNFNAJANGK @ RVA 0x3028960

void Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__HBNFNAJANGK
               (Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int32_t JEGMMDPFNIL;
  int32_t KMOHFJKJBMK;
  Il2CppObject *__this_00;
  int *piVar1;
  PCKJEMMFMKL_o *pPVar2;
  System_Action_o *PJDPEGNLFHH;
  System_Action_o *IECMGNKMACB;
  System_Action_int__int__o *HLBLIDOPBJJ;
  MethodInfo *method_00;
  
  if ((DAT_04565ca2 & 1) == 0) {
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_ABGFCIMEKCJ__);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_EIOLMLOELDL__);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_TypeInfo);
    FUN_01bab630(&System_Action<int,_int>_TypeInfo);
    FUN_01bab630(&System_Action_TypeInfo);
    FUN_01bab630(&int_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_GLCNPHCKIJP__);
    DAT_04565ca2 = 1;
  }
  __this_00 = (Il2CppObject *)
              thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell_AHGJCHALMGM_TypeInfo)
  ;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    thunk_FUN_01c20e04(__this_00 + 1,__this);
    if (IMMNELPBGIF != (Il2CppObject *)0x0) {
      if ((IMMNELPBGIF->klass->_1).element_class != (int_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
        FUN_01babc64(IMMNELPBGIF);
      }
      piVar1 = (int *)thunk_FUN_01bda96c();
      if (*piVar1 != 1) {
        return;
      }
      (__this->fields).NAMPHBKLLDM = false;
      pPVar2 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
      if (pPVar2 != (PCKJEMMFMKL_o *)0x0) {
        JEGMMDPFNIL = PCKJEMMFMKL__OMLNCFNPAMJ(pPVar2,0xd,0,(MethodInfo *)0x0);
        pPVar2 = PCKJEMMFMKL__AIHNLLGNBLC((MethodInfo *)0x0);
        if (pPVar2 != (PCKJEMMFMKL_o *)0x0) {
          method_00 = (MethodInfo *)0x0;
          KMOHFJKJBMK = PCKJEMMFMKL__LAPHEMPOHMP(pPVar2,0xd,1,(MethodInfo *)0x0);
          *(int32_t *)&__this_00[1].monitor = KMOHFJKJBMK;
          Nekki_SF2_GUI_Dialogs_Raids_RaidDailyTaskCell__GLCNPHCKIJP
                    (__this,JEGMMDPFNIL,KMOHFJKJBMK,method_00);
          PJDPEGNLFHH = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          IECMGNKMACB = (System_Action_o *)thunk_FUN_01bda818(System_Action_TypeInfo);
          System_Action___ctor();
          HLBLIDOPBJJ = (System_Action_int__int__o *)
                        thunk_FUN_01bda818(System_Action<int,_int>_TypeInfo);
          System_Action<int,_int>___ctor();
          LHEANFBMAAI__FAAJFKFKBOL(PJDPEGNLFHH,IECMGNKMACB,HLBLIDOPBJJ,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

