// Nekki.SF2.GUI.Dialogs.Raids.InputDialog$$OnClose @ RVA 0x353FC94

void Nekki_SF2_GUI_Dialogs_Raids_InputDialog__OnClose
               (Nekki_SF2_GUI_Dialogs_Raids_InputDialog_o *__this,Il2CppObject *IMMNELPBGIF,
               MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  System_String_o *pSVar3;
  System_Object_array *args;
  System_Type_o *pSVar4;
  long lVar5;
  System_Action_InputDialog_HJDIKOKAGJF__o **ppSVar6;
  undefined8 uVar7;
  MethodInfo *method_00;
  NCJBDBGIPNF_o *pNVar8;
  Nekki_SF2_GUI_Scripts_EditBox_o *pNVar9;
  System_Action_o *pSVar10;
  System_Action_string__o *pSVar11;
  System_Action_InputDialog_HJDIKOKAGJF__o *pSVar12;
  undefined1 auVar13 [16];
  int local_34;
  
  if ((DAT_04568aed & 1) == 0) {
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_TypeInfo);
    FUN_01bab630(&object___TypeInfo);
    FUN_01bab630(&StringLiteral_15641);
    FUN_01bab630(&StringLiteral_1);
    DAT_04568aed = 1;
  }
  if (IMMNELPBGIF != (Il2CppObject *)0x0) {
    if ((IMMNELPBGIF->klass->_1).element_class !=
        (Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo->_1).element_class) {
                    /* WARNING: Subroutine does not return */
      FUN_01babc64(IMMNELPBGIF);
    }
    auVar13 = thunk_FUN_01bda96c();
    method_00 = auVar13._8_8_;
    iVar1 = *auVar13._0_8_;
    if (iVar1 == 1) {
      auVar13 = (*(__this->klass->vtable)._34_OCJBGCEPJPJ.methodPtr)
                          (__this,(__this->klass->vtable)._34_OCJBGCEPJPJ.method);
      method_00 = auVar13._8_8_;
      if ((auVar13._0_8_ & 1) == 0) {
        args = (System_Object_array *)FUN_01bab718(object___TypeInfo,2);
        pSVar4 = System_Object__GetType((Il2CppObject *)__this,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Type_o *)0x0) &&
           (pIVar2 = (Il2CppObject *)
                     (*(pSVar4->klass->vtable)._26_unknown.methodPtr)
                               (pSVar4,(pSVar4->klass->vtable)._26_unknown.method),
           args != (System_Object_array *)0x0)) {
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar5 = thunk_FUN_01bda71c(pIVar2,(((args->obj).klass)->_1).element_class), lVar5 == 0
             )) {
LAB_0363ff9c:
            uVar7 = thunk_FUN_01be8e1c();
                    /* WARNING: Subroutine does not return */
            FUN_01bab798(uVar7,0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = pIVar2;
            thunk_FUN_01c20e04(args->m_Items,pIVar2);
            pNVar9 = (__this->fields)._editBox;
            if (pNVar9 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0363ff90;
            pSVar3 = (pNVar9->fields).super.m_Text;
            if ((pSVar3 != (System_String_o *)0x0) &&
               (lVar5 = thunk_FUN_01bda71c(pSVar3,(((args->obj).klass)->_1).element_class),
               lVar5 == 0)) goto LAB_0363ff9c;
            if (1 < (uint)args->max_length) {
              args->m_Items[1] = (Il2CppObject *)pSVar3;
              thunk_FUN_01c20e04(args->m_Items + 1,pSVar3);
              if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                thunk_FUN_01ba7564();
              }
              UnityEngine_Debug__LogErrorFormat(StringLiteral_15641,args,(MethodInfo *)0x0);
              return;
            }
          }
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        goto LAB_0363ff90;
      }
    }
    Nekki_SF2_GUI_Dialogs_Raids_InputDialog__FIOGPFLBLIF(__this,method_00);
    pNVar8 = (__this->fields).GIAMLPMHEDN;
    if (pNVar8 != (NCJBDBGIPNF_o *)0x0) {
      pSVar12 = (pNVar8->fields).MIMKJIKCPGP;
      if (pSVar12 != (System_Action_InputDialog_HJDIKOKAGJF__o *)0x0) {
        pIVar2 = (Il2CppObject *)
                 thunk_FUN_01bda818(Nekki_SF2_GUI_Dialogs_Raids_InputDialog_HJDIKOKAGJF_TypeInfo);
        *(undefined1 *)&pIVar2[1].klass = 1;
        System_Object___ctor(pIVar2,(MethodInfo *)0x0);
        *(bool *)&pIVar2[1].klass = iVar1 == 0;
        pSVar3 = StringLiteral_1;
        if (iVar1 != 0) {
          pNVar9 = (__this->fields)._editBox;
          if (pNVar9 == (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) goto LAB_0363ff90;
          pSVar3 = PCOEHCPGBBG__OCJBAFGNLIE((pNVar9->fields).super.m_Text,(MethodInfo *)0x0);
        }
        pIVar2[1].monitor = pSVar3;
        thunk_FUN_01c20e04();
        pNVar8 = (__this->fields).GIAMLPMHEDN;
        if (pNVar8 == (NCJBDBGIPNF_o *)0x0) goto LAB_0363ff90;
        pIVar2[2].klass = (Il2CppClass *)(pNVar8->fields).KOANCCDDBDA;
        thunk_FUN_01c20e04();
        (*(code *)(pSVar12->fields).super.super.invoke_impl)
                  ((pSVar12->fields).super.super.method_code,pIVar2,
                   (pSVar12->fields).super.super.method);
        pNVar8 = (__this->fields).GIAMLPMHEDN;
        if (pNVar8 == (NCJBDBGIPNF_o *)0x0) goto LAB_0363ff90;
        ppSVar6 = &(pNVar8->fields).MIMKJIKCPGP;
        *ppSVar6 = (System_Action_InputDialog_HJDIKOKAGJF__o *)0x0;
        thunk_FUN_01c20e04(ppSVar6,0);
      }
      if (iVar1 == 1) {
        pNVar9 = (__this->fields)._editBox;
        if (pNVar9 != (Nekki_SF2_GUI_Scripts_EditBox_o *)0x0) {
          pSVar11 = (__this->fields).OnClosedOkAction;
          pSVar3 = PCOEHCPGBBG__OCJBAFGNLIE((pNVar9->fields).super.m_Text,(MethodInfo *)0x0);
          if (pSVar11 != (System_Action_string__o *)0x0) {
            (*(code *)(pSVar11->fields).super.super.invoke_impl)
                      ((pSVar11->fields).super.super.method_code,pSVar3,
                       (pSVar11->fields).super.super.method);
            goto LAB_0363ff5c;
          }
        }
      }
      else {
        pSVar10 = (__this->fields).OnClosedCancelAction;
        if (pSVar10 != (System_Action_o *)0x0) {
          (*(code *)(pSVar10->fields).super.super.invoke_impl)
                    ((pSVar10->fields).super.super.method_code,(pSVar10->fields).super.super.method)
          ;
LAB_0363ff5c:
          local_34 = iVar1;
          pIVar2 = (Il2CppObject *)
                   thunk_FUN_01bda448(Nekki_SF2_GUI_Dialogs_BaseDialog_DCGLMJMGGDC_TypeInfo,
                                      &local_34);
          Nekki_SF2_GUI_Dialogs_BaseDialog__OnClose
                    ((Nekki_SF2_GUI_Dialogs_BaseDialog_o *)__this,pIVar2,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_0363ff90:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

