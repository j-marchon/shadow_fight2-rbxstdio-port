// Nekki.SF2.Core.Fights.Controls.Stick$$OnPointerUp @ RVA 0x3069EA4

void Nekki_SF2_Core_Fights_Controls_Stick__OnPointerUp
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *OHNNFPGGEFK,MethodInfo *method)

{
  int32_t OOJKNECICBP;
  bool bVar1;
  System_Collections_Generic_List_int__o *pSVar2;
  System_Collections_Generic_Dictionary_int__Vector2__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  OIIEGNHALFL_o *__this_02;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *pUVar3;
  System_Action_GGFFOJJGHGP__o *pSVar4;
  
  if ((DAT_04565f1e & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Remove__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_get_Count__);
    FUN_01bab630(&OIIEGNHALFL_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f1e = 1;
  }
  if ((OHNNFPGGEFK != (UnityEngine_EventSystems_PointerEventData_o *)0x0) &&
     (pSVar2 = (__this->fields).PJPCLCHFCEE, pSVar2 != (System_Collections_Generic_List_int__o *)0x0
     )) {
    System_Collections_Generic_List<int>__Remove
              (pSVar2,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
               Method_System_Collections_Generic_List<int>_Remove__);
    __this_00 = (__this->fields).DOPAABMBANO;
    if (__this_00 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
      method_00 = Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__;
      System_Collections_Generic_Dictionary<int,_Vector2>__Remove
                (__this_00,(OHNNFPGGEFK->fields)._pointerId_k__BackingField,
                 (MethodInfo_2301C28 *)
                 Method_System_Collections_Generic_Dictionary<int,_Vector2>_Remove__);
      pSVar2 = (__this->fields).PJPCLCHFCEE;
      if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
        if ((pSVar2->fields)._size < 1) {
          Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,false,method_00);
        }
        pUVar3 = (__this->fields)._flashing;
        if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if (bVar1) {
          pUVar3 = (__this->fields)._flashing;
          if ((pUVar3 == (UnityEngine_UI_Image_o *)0x0) ||
             (__this_01 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
             __this_01 == (UnityEngine_GameObject_o *)0x0)) goto LAB_0316a008;
          UnityEngine_GameObject__SetActive
                    (__this_01,(__this->fields).IEFGAHDEMCC,(MethodInfo *)0x0);
        }
        pSVar4 = (__this->fields).JANHEDHPGEG;
        OOJKNECICBP = (__this->fields).HEMCGGBCBKH;
        __this_02 = (OIIEGNHALFL_o *)thunk_FUN_01bda818(OIIEGNHALFL_TypeInfo);
        OIIEGNHALFL___ctor(__this_02,OOJKNECICBP,(MethodInfo *)0x0);
        if (pSVar4 != (System_Action_GGFFOJJGHGP__o *)0x0) {
          (*(code *)(pSVar4->fields).super.super.invoke_impl)
                    ((pSVar4->fields).super.super.method_code,__this_02,
                     (pSVar4->fields).super.super.method);
          (__this->fields).HEMCGGBCBKH = 0;
          return;
        }
      }
    }
  }
LAB_0316a008:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

