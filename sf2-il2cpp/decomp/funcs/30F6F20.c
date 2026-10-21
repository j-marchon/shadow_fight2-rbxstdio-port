// Nekki.SF2.GUI.Dialogs.NotificationsGame$$LIJIBDHAMDM @ RVA 0x30F6F20

void Nekki_SF2_GUI_Dialogs_NotificationsGame__LIJIBDHAMDM
               (Nekki_SF2_GUI_Dialogs_NotificationsGame_o *__this,MethodInfo *method)

{
  BackKeyManager_o *__this_00;
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *method_00;
  System_Action_o *pSVar2;
  
  __this_00 = BackKeyManager__get_Instance((MethodInfo *)0x0);
  if (__this_00 != (BackKeyManager_o *)0x0) {
    BackKeyManager__RemoveBackKeyController(__this_00,(HAFLPBGEGCI_o *)__this,(MethodInfo *)0x0);
    pUVar1 = (__this->fields)._inputBlocker;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar1 = UnityEngine_GameObject__get_gameObject(pUVar1,(MethodInfo *)0x0),
       pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
      UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
      pSVar2 = (__this->fields).DKPPMJCLNAB;
      if (pSVar2 != (System_Action_o *)0x0) {
        (*(code *)(pSVar2->fields).super.super.invoke_impl)
                  ((pSVar2->fields).super.super.method_code,(pSVar2->fields).super.super.method);
        if ((__this->fields).ONFGAANLDKH != false) {
          (__this->fields).ONFGAANLDKH = false;
          Nekki_SF2_GUI_Dialogs_NotificationsGame__POIOFMEMHBP(__this,method_00);
          return;
        }
        if ((__this->fields).BLNMHHKCCOD != (System_Action_object__o *)0x0) {
          return;
        }
        __this_01 = (__this->fields)._renderRoot;
        if ((__this_01 != (UnityEngine_RectTransform_o *)0x0) &&
           (pUVar1 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0),
           pUVar1 != (UnityEngine_GameObject_o *)0x0)) {
          UnityEngine_GameObject__SetActive(pUVar1,false,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

