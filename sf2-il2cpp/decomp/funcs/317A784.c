// Nekki.SF2.GUI.Dialogs.StrangerDialog$$LCGFJKFJKJK @ RVA 0x317A784

void Nekki_SF2_GUI_Dialogs_StrangerDialog__LCGFJKFJKJK
               (Nekki_SF2_GUI_Dialogs_StrangerDialog_o *__this,int32_t AINMEMEFFPK,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  LabelButton_o *pLVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *transform;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *pMVar5;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  LabelButton_o **ppLVar6;
  LabelButton_o *y;
  UnityEngine_Vector3_o UVar7;
  
  pMVar5 = (MethodInfo *)(ulong)(uint)AINMEMEFFPK;
  if ((DAT_04566983 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566983 = 1;
    pMVar5 = extraout_x1;
  }
  Nekki_SF2_GUI_Dialogs_StrangerDialog__CGDLJPELGIJ(__this,pMVar5);
  pMVar5 = extraout_x1_00;
  if ((__this->fields).KGEDEAGBKGB != false) {
    (*(__this->klass->vtable)._17_GLJGIJNALCA.methodPtr)
              (__this,(__this->klass->vtable)._17_GLJGIJNALCA.method);
    (*(__this->klass->vtable)._14_KHKLLNFCMME.methodPtr)
              (__this,(__this->klass->vtable)._14_KHKLLNFCMME.method);
    pMVar5 = extraout_x1_01;
  }
  if (((__this->fields).super.NHNBEPIDGIB != false) &&
     (iVar2 = Nekki_SF2_GUI_Dialogs_StrangerDialog__OALFHNKDIHC(__this,pMVar5), iVar2 < 3)) {
    pLVar3 = Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB(__this,true,method);
    ppLVar6 = &(__this->fields).super.super._btnOK;
    *ppLVar6 = pLVar3;
    thunk_FUN_01c20e04(ppLVar6,pLVar3);
    pLVar3 = Nekki_SF2_GUI_Dialogs_StrangerDialog__HDECGIDPOPB(__this,false,method);
    y = *ppLVar6;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pLVar3,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (!bVar1) {
      pLVar3 = (LabelButton_o *)0x0;
    }
    (__this->fields).super.super._btnCancel = pLVar3;
    thunk_FUN_01c20e04();
    (*(__this->klass->vtable)._42_PMLICAPHBJD.methodPtr)
              (__this,(__this->klass->vtable)._42_PMLICAPHBJD.method);
  }
  pUVar4 = (__this->fields).super._textsSprite;
  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
    transform = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (__this->fields).super._textsSprite;
    if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UVar7 = UnityEngine_Transform__get_localPosition(__this_00,(MethodInfo *)0x0);
      UnityEngine_TransformExtensions__SetLocalPositionX
                (transform,UVar7.fields.x + (__this->fields).AAGFFOEHDHI,(MethodInfo *)0x0);
                    /* WARNING: Could not recover jumptable at 0x0327a8e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(__this->klass->vtable)._50_NDGMODGKNEG.methodPtr)
                (__this,(__this->klass->vtable)._50_NDGMODGKNEG.method);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

