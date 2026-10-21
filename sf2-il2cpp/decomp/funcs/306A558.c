// Nekki.SF2.Core.Fights.Controls.Stick$$ReleaseInput @ RVA 0x306A558

void Nekki_SF2_Core_Fights_Controls_Stick__ReleaseInput
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_int__Vector2__o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  MethodInfo *in_x2;
  System_Collections_Generic_List_int__o *pSVar2;
  UnityEngine_UI_Image_o *pUVar3;
  
  if ((DAT_04565f24 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<int,_Vector2>_Clear__);
    FUN_01bab630(&Method_System_Collections_Generic_List<int>_Clear__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f24 = 1;
  }
  __this_00 = (__this->fields).DOPAABMBANO;
  if (__this_00 != (System_Collections_Generic_Dictionary_int__Vector2__o *)0x0) {
    System_Collections_Generic_Dictionary<int,_Vector2>__Clear
              (__this_00,Method_System_Collections_Generic_Dictionary<int,_Vector2>_Clear__);
    pSVar2 = (__this->fields).PJPCLCHFCEE;
    if (pSVar2 != (System_Collections_Generic_List_int__o *)0x0) {
      (pSVar2->fields)._size = 0;
      (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
      (__this->fields).HEMCGGBCBKH = 0;
      method_00 = extraout_x1;
      if (DAT_0455fa75 == '\0') {
        FUN_01bab630(&UnityEngine_Vector2_TypeInfo);
        DAT_0455fa75 = '\x01';
        method_00 = extraout_x1_00;
      }
      Nekki_SF2_Core_Fights_Controls_Stick__MCOFHDGMOBP
                (__this,(UnityEngine_Vector2_o)
                        (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields,method_00);
      Nekki_SF2_Core_Fights_Controls_Stick__HCJBFHKPODJ(__this,false,in_x2);
      pUVar3 = (__this->fields)._flashing;
      if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if (!bVar1) {
        return;
      }
      pUVar3 = (__this->fields)._flashing;
      if ((pUVar3 != (UnityEngine_UI_Image_o *)0x0) &&
         (__this_01 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0),
         __this_01 != (UnityEngine_GameObject_o *)0x0)) {
        UnityEngine_GameObject__SetActive(__this_01,(__this->fields).IEFGAHDEMCC,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

