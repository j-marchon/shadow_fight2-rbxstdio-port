// IKGPGAPFKNE$$PJEOKMGNMNF @ RVA 0x3247B08

void IKGPGAPFKNE__PJEOKMGNMNF(IKGPGAPFKNE_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  
  if ((DAT_045670d1 & 1) == 0) {
    FUN_01bab630(&Method_KFHIPIPCOHK_KJKDAHGENPM<GCOLFANNEMF>__);
    DAT_045670d1 = 1;
  }
  fVar2 = (__this->fields).CEONKIEGMEB;
  if (0.0 < fVar2) {
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    (__this->fields).CEONKIEGMEB = fVar2 - fVar1;
    return;
  }
  KFHIPIPCOHK__KJKDAHGENPM<object>
            ((KFHIPIPCOHK_o *)__this,Method_KFHIPIPCOHK_KJKDAHGENPM<GCOLFANNEMF>__);
  return;
}

