// CloseButton$$GIENGNEGHPJ @ RVA 0x303C37C

void CloseButton__GIENGNEGHPJ(CloseButton_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Vector2_Fields UVar3;
  UnityEngine_Vector3_o UVar4;
  
                    /* try { // try from 0313c380 to 0323c387 has its CatchHandler @ 0313c388 */
                    /* catch() { ... } // from try @ 0313c2e4 with catch @ 0313c388
                       catch() { ... } // from try @ 0313c364 with catch @ 0313c388
                       catch() { ... } // from try @ 0313c380 with catch @ 0313c388 */
  if ((DAT_04565d8f & 1) == 0) {
    FUN_01bab630(&DG_Tweening_DOTween_TypeInfo);
    DAT_04565d8f = 1;
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if ((DG_Tweening_DOTween_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(DG_Tweening_DOTween_TypeInfo);
  }
  DG_Tweening_DOTween__Kill((Il2CppObject *)pUVar2,false,(MethodInfo *)0x0);
  if ((__this->fields).EOPAAFGEJAE != false) {
    return;
  }
  pUVar2 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                    /* try { // try from 0313c3fc to 0323c52b has its CatchHandler @ 0313c3fc
                       catch() { ... } // from try @ 0313c3fc with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c604 with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c684 with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c6c8 with catch @ 0313c3fc
                       catch() { ... } // from try @ 0313c710 with catch @ 0313c3fc */
    UVar4 = UnityEngine_Transform__get_localPosition(pUVar2,(MethodInfo *)0x0);
    (__this->fields).GOLEIJPNDMM.fields.x = UVar4.fields.x;
    (__this->fields).GOLEIJPNDMM.fields.y = UVar4.fields.y;
    __this_00 = SFButton__get_RectTransform((SFButton_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      UVar3 = (UnityEngine_Vector2_Fields)
              UnityEngine_RectTransform__get_sizeDelta(__this_00,(MethodInfo *)0x0);
      iVar1 = (__this->fields).super.super.ButtonId;
      (__this->fields).LHOCKKLCPHK.fields = UVar3;
      if (iVar1 == -1) {
        (__this->fields).super.super.ButtonId = 0;
      }
      (__this->fields).EOPAAFGEJAE = true;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

