// HBOAEOEEDEN$$JODGPLBHHIA @ RVA 0x311FA2C

void HBOAEOEEDEN__JODGPLBHHIA(HBOAEOEEDEN_o *__this,MethodInfo *method)

{
  UnityEngine_SpriteRenderer_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  
  pUVar1 = (__this->fields).PBFDBGBMIKF;
  if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
    pUVar2 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
    Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).LAEBGENCMPB;
    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
      pUVar2 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
      Util__JODGPLBHHIA(pUVar2,false,(MethodInfo *)0x0);
      DG_Tweening_TweenExtensions__Kill((__this->fields).BHAEECGJBLB,false,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

