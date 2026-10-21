// MNLIBPAOCLG$$IIMJPBCGBKN @ RVA 0x31E7E70

void MNLIBPAOCLG__IIMJPBCGBKN(MNLIBPAOCLG_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_SpriteRenderer_o *pUVar1;
  KHEDNGODOIC_o *pKVar2;
  
  pKVar2 = (__this->fields).ANDGPHHMNMC;
  if ((pKVar2 != (KHEDNGODOIC_o *)0x0) &&
     (__this_00 = (pKVar2->fields).LDAKOINICNJ, __this_00 != (UnityEngine_GameObject_o *)0x0)) {
    UnityEngine_GameObject__SetActive(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    pUVar1 = (__this->fields).NGMNLILMJAP;
    if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
      UnityEngine_Renderer__set_enabled
                ((UnityEngine_Renderer_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
      pUVar1 = (__this->fields).JFILNBPGNKO;
      if (pUVar1 != (UnityEngine_SpriteRenderer_o *)0x0) {
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)pUVar1,CJNHFNHJHPE,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

