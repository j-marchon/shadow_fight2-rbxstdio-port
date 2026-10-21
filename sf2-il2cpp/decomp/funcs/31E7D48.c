// MNLIBPAOCLG$$CAOJFFBJOCG @ RVA 0x31E7D48

void MNLIBPAOCLG__CAOJFFBJOCG(MNLIBPAOCLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Sprite_o *value;
  
  if ((DAT_04566d72 & 1) == 0) {
    FUN_01bab630(&KKCBGIBKOCP_TypeInfo);
    FUN_01bab630(&StringLiteral_12936);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566d72 = 1;
  }
  pUVar1 = (__this->fields).JFILNBPGNKO;
  (__this->fields).FBHJEKLCEOC = CJNHFNHJHPE;
  if ((pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) &&
     (__this_00 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    if (!CJNHFNHJHPE) {
      return;
    }
    pUVar1 = (__this->fields).NGMNLILMJAP;
    if ((KKCBGIBKOCP_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    value = KKCBGIBKOCP__NECCNHODCAE(StringLiteral_1,StringLiteral_12936,false,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
      UnityEngine_SpriteRenderer__set_sprite(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

