// DICFMPEJCCB$$MAHFCKJGBPP @ RVA 0x3372B98

void DICFMPEJCCB__MAHFCKJGBPP(DICFMPEJCCB_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  ACHLOMELAJE_o *__this_00;
  
                    /* try { // try from 03472b98 to 03572bbf has its CatchHandler @ 03472f08 */
  if ((DAT_04567b35 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04567b35 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03472bf4 to 03572c1b has its CatchHandler @ 03472f04 */
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
                    /* try { // try from 03472c28 to 03572c33 has its CatchHandler @ 03472ef8 */
  __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (__this_00 != (ACHLOMELAJE_o *)0x0) {
    ACHLOMELAJE__CCHJLOEBOAI
              (__this_00,
               (UnityEngine_Color_o)*(UnityEngine_Color_Fields *)&(__this->fields).super.field_0x54,
               (MethodInfo *)0x0);
                    /* try { // try from 03472c48 to 03572c4f has its CatchHandler @ 03472ef0 */
    BOFEMGGNODC__FGNINNOOCCL((BOFEMGGNODC_o *)__this,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

