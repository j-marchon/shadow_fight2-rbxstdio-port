// FOKJBDHLIMG$$FMFCHMPPCBH @ RVA 0x309F3FC

HEFOANCOHDC_o *
FOKJBDHLIMG__FMFCHMPPCBH
          (FOKJBDHLIMG_o *__this,HEFOANCOHDC_o *EIKFGOCCOIE,System_Xml_XmlNode_o *AHDGNOJPPIB,
          MethodInfo *method)

{
  System_Xml_XmlNode_o *GHKNNCLBPEO;
  HEFOANCOHDC_o *pHVar1;
  
  if ((DAT_04566138 & 1) == 0) {
    FUN_01bab630(&StringLiteral_11876);
    __this = (FOKJBDHLIMG_o *)FUN_01bab630(&StringLiteral_11030);
    DAT_04566138 = 1;
  }
  if (AHDGNOJPPIB != (System_Xml_XmlNode_o *)0x0) {
    GHKNNCLBPEO = (System_Xml_XmlNode_o *)
                  (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                            (AHDGNOJPPIB,StringLiteral_11876,
                             (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    __this = (FOKJBDHLIMG_o *)
             (*(AHDGNOJPPIB->klass->vtable)._51_get_Item.methodPtr)
                       (AHDGNOJPPIB,StringLiteral_11030,
                        (AHDGNOJPPIB->klass->vtable)._51_get_Item.method);
    if (GHKNNCLBPEO == (System_Xml_XmlNode_o *)0x0 && __this == (FOKJBDHLIMG_o *)0x0) {
      return EIKFGOCCOIE;
    }
    if (EIKFGOCCOIE != (HEFOANCOHDC_o *)0x0) {
      pHVar1 = HEFOANCOHDC__FAOBHLCDKJI
                         (EIKFGOCCOIE,GHKNNCLBPEO,(System_Xml_XmlNode_o *)__this,(MethodInfo *)0x0);
      return pHVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(__this);
}

