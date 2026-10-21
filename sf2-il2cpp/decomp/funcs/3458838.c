// Nekki.SF2.GUI.Dialogs.Raids.ProbabilityContent$$FMBJPOAOGFJ @ RVA 0x3458838

int32_t Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent__FMBJPOAOGFJ
                  (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *__this,
                  KBAIDAHOMHA_o *FMPJLBLNHMC,KBAIDAHOMHA_o *IHEPHBIPLPM,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  int iVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *pIVar5;
  System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *pSVar6;
  int32_t *piVar7;
  
  if ((DAT_045682da & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Count__);
    __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)
             FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__)
    ;
    DAT_045682da = 1;
  }
  if ((FMPJLBLNHMC == (KBAIDAHOMHA_o *)0x0) ||
     (__this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)(FMPJLBLNHMC->fields).ECGLDFDOAFM
     , __this == (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0)) goto LAB_03558968;
  iVar3 = *(int *)&(__this->fields).super.m_CancellationTokenSource;
  if (iVar3 == 0) {
joined_r0x035588f4:
    if (IHEPHBIPLPM == (KBAIDAHOMHA_o *)0x0) {
LAB_03558968:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8(__this);
    }
  }
  else {
    if ((IHEPHBIPLPM == (KBAIDAHOMHA_o *)0x0) ||
       (pSVar6 = (IHEPHBIPLPM->fields).ECGLDFDOAFM,
       pSVar6 == (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0))
    goto LAB_03558968;
    iVar1 = (pSVar6->fields)._size;
    if (iVar1 != 0) {
      if (0 < iVar3) {
        if (0 < iVar1) {
          pIVar4 = System_Collections_Generic_List<object>__get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar6,0,
                              Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                             );
          __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pSVar6 = (FMPJLBLNHMC->fields).ECGLDFDOAFM;
            __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
            if (pSVar6 != (System_Collections_Generic_List_MGNDHCBAPEN_int__int___o *)0x0) {
              pIVar5 = System_Collections_Generic_List<object>__get_Item
                                 ((System_Collections_Generic_List_object__o *)pSVar6,0,
                                  Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                                 );
              __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
              if (pIVar5 != (Il2CppObject *)0x0) {
                iVar3 = (int)pIVar4 + 0x14;
                piVar7 = (int32_t *)((long)&pIVar5[1].klass + 4);
                goto LAB_03558900;
              }
            }
          }
          goto LAB_03558968;
        }
        pIVar4 = System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)__this,0,
                            Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                           );
        __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
        if (pIVar4 == (Il2CppObject *)0x0) goto LAB_03558968;
        iVar3 = (int)pIVar4 + 0x14;
        piVar7 = &(IHEPHBIPLPM->fields).FABIFPKFPCK;
        goto LAB_03558900;
      }
      if (iVar1 < 1) {
        return 0;
      }
      IHEPHBIPLPM = (KBAIDAHOMHA_o *)
                    System_Collections_Generic_List<object>__get_Item
                              ((System_Collections_Generic_List_object__o *)pSVar6,0,
                               Method_System_Collections_Generic_List<MGNDHCBAPEN<int,_int>>_get_Item__
                              );
      __this = (Nekki_SF2_GUI_Dialogs_Raids_ProbabilityContent_o *)0x0;
      goto joined_r0x035588f4;
    }
  }
  iVar3 = (int)IHEPHBIPLPM + 0x14;
  piVar7 = &(FMPJLBLNHMC->fields).FABIFPKFPCK;
LAB_03558900:
  iVar2 = System_Int32__CompareTo(iVar3,*piVar7,(MethodInfo *)0x0);
  return iVar2;
}

