// MNLIBPAOCLG$$GHCGOFHFBGO @ RVA 0x31E8158

void MNLIBPAOCLG__GHCGOFHFBGO(MNLIBPAOCLG_o *__this,float BCEJOJECHDA,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *CMMIJCJOBBF;
  MethodInfo *extraout_x1;
  UnityEngine_SpriteRenderer_o *pUVar2;
  UnityEngine_Color_o value;
  
  if ((DAT_04566d77 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04566d77 = 1;
    method = extraout_x1;
  }
  pUVar2 = (__this->fields).JNBHKOBOIMD;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo,method);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pUVar2 = (__this->fields).JNBHKOBOIMD;
    if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
      value.fields.a = BCEJOJECHDA / 255.0;
      value.fields.b = 1.0;
      value.fields.r = 1.0;
      value.fields.g = 1.0;
      UnityEngine_SpriteRenderer__set_color(pUVar2,value,(MethodInfo *)0x0);
      pUVar2 = (__this->fields).JNBHKOBOIMD;
      if (pUVar2 != (UnityEngine_SpriteRenderer_o *)0x0) {
                    /* try { // try from 032e81ec to 033e8213 has its CatchHandler @ 032e8448 */
        CMMIJCJOBBF = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
        Util__IHPDCBOFHPA(CMMIJCJOBBF,0.0 < BCEJOJECHDA,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  return;
}

