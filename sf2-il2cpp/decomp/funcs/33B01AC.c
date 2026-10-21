// RaidPlayerEquipmentImage$$OnEnable @ RVA 0x33B01AC

void RaidPlayerEquipmentImage__OnEnable(RaidPlayerEquipmentImage_o *__this,MethodInfo *method)

{
  UnityEngine_Events_UnityAction_o *call;
  MethodInfo *extraout_x1;
  SFButton_o *pSVar1;
  UnityEngine_Events_UnityEvent_o *__this_00;
  
  if ((DAT_04567d44 & 1) == 0) {
    FUN_01bab630(&Method_RaidPlayerEquipmentImage_NIAAAOEHCDD__);
    FUN_01bab630(&UnityEngine_Events_UnityAction_TypeInfo);
    DAT_04567d44 = 1;
    method = extraout_x1;
  }
  pSVar1 = (__this->fields)._button;
  if (pSVar1 != (SFButton_o *)0x0) {
    __this_00 = (UnityEngine_Events_UnityEvent_o *)(pSVar1->fields).super.m_OnClick;
    call = (UnityEngine_Events_UnityAction_o *)
           thunk_FUN_01bda818(UnityEngine_Events_UnityAction_TypeInfo,method);
    UnityEngine_Events_UnityAction___ctor();
    if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
      UnityEngine_Events_UnityEvent__AddListener(__this_00,call,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

