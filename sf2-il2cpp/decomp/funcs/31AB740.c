// GCIFMNHADDF$$LDLLGJNAKKP @ RVA 0x31AB740

void GCIFMNHADDF__LDLLGJNAKKP
               (GCIFMNHADDF_o *__this,Nekki_SF2_GUI_Dialogs_BaseDialog_o *LMEHKLFGEHI,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  System_Predicate_T__o *pSVar3;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o **ppNVar4;
  Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *__this_00;
  Nekki_SF2_GUI_Dialogs_BaseDialog_o *pNVar5;
  MethodInfo *method_00;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  MethodInfo *method_01;
  System_Action_BaseDialog__o *pSVar6;
  System_Collections_Generic_List_BaseDialog__o *__this_01;
  System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *__this_02;
  
  if ((DAT_04566b3d & 1) == 0) {
    FUN_01bab630(&Method_GCIFMNHADDF_BNFLBFKMCAG_NHBPEJLCPFK__);
    FUN_01bab630(&Method_GCIFMNHADDF_BNFLBFKMCAG_PPJAJIDFHCG__);
    FUN_01bab630(&GCIFMNHADDF_BNFLBFKMCAG_TypeInfo);
    FUN_01bab630(&Method_DJNBJHPDKDP_AELBAPFOKHK<BaseDialog>__);
    FUN_01bab630(&Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BaseDialog>_RemoveAll__);
    FUN_01bab630(&Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_RemoveAll__);
    FUN_01bab630(&System_Predicate<BaseDialog>_TypeInfo);
    FUN_01bab630(&System_Predicate<GCIFMNHADDF_NFAHLBCFIPD>_TypeInfo);
    DAT_04566b3d = 1;
  }
  pIVar2 = (Il2CppObject *)thunk_FUN_01bda818(GCIFMNHADDF_BNFLBFKMCAG_TypeInfo);
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2 = pIVar2 + 1;
    pIVar2->klass = (Il2CppClass *)LMEHKLFGEHI;
    thunk_FUN_01c20e04(pIVar2,LMEHKLFGEHI);
    __this_01 = (__this->fields).IMMJEIGBAAC;
    pSVar3 = (System_Predicate_T__o *)thunk_FUN_01bda818(System_Predicate<BaseDialog>_TypeInfo);
    System_Predicate<object>___ctor();
    if (__this_01 != (System_Collections_Generic_List_BaseDialog__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAll
                ((System_Collections_Generic_List_object__o *)__this_01,pSVar3,
                 Method_System_Collections_Generic_List<BaseDialog>_RemoveAll__);
      __this_02 = (__this->fields).EDBKLOENEPB;
      pSVar3 = (System_Predicate_T__o *)
               thunk_FUN_01bda818(System_Predicate<GCIFMNHADDF_NFAHLBCFIPD>_TypeInfo);
      System_Predicate<object>___ctor();
      if (__this_02 != (System_Collections_Generic_List_GCIFMNHADDF_NFAHLBCFIPD__o *)0x0) {
        System_Collections_Generic_List<object>__RemoveAll
                  ((System_Collections_Generic_List_object__o *)__this_02,pSVar3,
                   Method_System_Collections_Generic_List<GCIFMNHADDF_NFAHLBCFIPD>_RemoveAll__);
        bVar1 = DJNBJHPDKDP__OBECCOPBADO<object>
                          ((System_Collections_Generic_List_T__o *)(__this->fields).IMMJEIGBAAC,
                           Method_DJNBJHPDKDP_OBECCOPBADO<BaseDialog>__);
        if (bVar1) {
          ppNVar4 = &(__this->fields)._AOOFDKJAALA_k__BackingField;
          *ppNVar4 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)0x0;
          thunk_FUN_01c20e04(ppNVar4,0);
          __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
          if (__this_00 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) goto LAB_032ab974;
          bVar1 = false;
        }
        else {
          pNVar5 = (Nekki_SF2_GUI_Dialogs_BaseDialog_o *)
                   DJNBJHPDKDP__AELBAPFOKHK<object>
                             ((System_Collections_Generic_List_T__o *)(__this->fields).IMMJEIGBAAC,
                              Method_DJNBJHPDKDP_AELBAPFOKHK<BaseDialog>__);
          (__this->fields)._AOOFDKJAALA_k__BackingField = pNVar5;
          thunk_FUN_01c20e04();
          __this_00 = Nekki_SF2_GUI_Dialogs_DialogCanvasController__get_Instance((MethodInfo *)0x0);
          if (__this_00 == (Nekki_SF2_GUI_Dialogs_DialogCanvasController_o *)0x0) goto LAB_032ab974;
          bVar1 = true;
        }
        Nekki_SF2_GUI_Dialogs_DialogCanvasController__BlockNotDialogTouches
                  (__this_00,bVar1,(MethodInfo *)0x0);
        GCIFMNHADDF__MCKCJDBPAFB(__this,method_00);
        pSVar6 = (__this->fields).LANNHNJHOLM;
        method_01 = extraout_x1;
        if (pSVar6 != (System_Action_BaseDialog__o *)0x0) {
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,
                     (__this->fields)._AOOFDKJAALA_k__BackingField,
                     (pSVar6->fields).super.super.method);
          method_01 = extraout_x1_00;
        }
        pSVar6 = (__this->fields).FIDNHJLFPHC;
        if (pSVar6 != (System_Action_BaseDialog__o *)0x0) {
          (*(code *)(pSVar6->fields).super.super.invoke_impl)
                    ((pSVar6->fields).super.super.method_code,pIVar2->klass,
                     (pSVar6->fields).super.super.method);
          method_01 = extraout_x1_01;
        }
        GCIFMNHADDF__HAMCIMDBOCI(__this,method_01);
        return;
      }
    }
  }
LAB_032ab974:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

