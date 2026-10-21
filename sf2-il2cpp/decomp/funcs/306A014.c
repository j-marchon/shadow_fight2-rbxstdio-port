// Nekki.SF2.Core.Fights.Controls.Stick$$SetIsFlashing @ RVA 0x306A014

void Nekki_SF2_Core_Fights_Controls_Stick__SetIsFlashing
               (Nekki_SF2_Core_Fights_Controls_Stick_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Image_o *pUVar2;
  
  if ((DAT_04565f1f & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04565f1f = 1;
  }
  if ((__this->fields).IEFGAHDEMCC != CJNHFNHJHPE) {
    (__this->fields).IEFGAHDEMCC = CJNHFNHJHPE;
    pUVar2 = (__this->fields)._flashing;
    if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if (bVar1) {
      pUVar2 = (__this->fields)._flashing;
      if ((pUVar2 == (UnityEngine_UI_Image_o *)0x0) ||
         (__this_00 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0),
         __this_00 == (UnityEngine_GameObject_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    }
    (__this->fields).PDGNMHLGFJC = 0;
    (__this->fields).GOINPGAFMAJ = true;
  }
  return;
}

