// NGCBNMBJMOE$$CMMAOAPNOMN @ RVA 0x3211678

UnityEngine_Sprite_o *
NGCBNMBJMOE__CMMAOAPNOMN
          (System_String_o *NPNDHEBBEAD,System_String_o *DMCFDIBHCPD,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Object_o *x;
  System_String_array *values;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *method_00;
  
  if ((DAT_04566e91 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&NGCBNMBJMOE_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&string___TypeInfo);
    FUN_01bab630(&StringLiteral_10266);
    FUN_01bab630(&StringLiteral_802);
                    /* try { // try from 033116f0 to 03411717 has its CatchHandler @ 033119d8 */
    FUN_01bab630(&StringLiteral_1492);
    FUN_01bab630(&StringLiteral_881);
    DAT_04566e91 = 1;
  }
  pSVar2 = System_String__Concat(NPNDHEBBEAD,StringLiteral_1492,DMCFDIBHCPD,(MethodInfo *)0x0);
  method_00 = extraout_x1;
  if ((NGCBNMBJMOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NGCBNMBJMOE_TypeInfo);
    method_00 = extraout_x1_00;
  }
  x = (UnityEngine_Object_o *)NGCBNMBJMOE__CBLIMOEFGGL(pSVar2,method_00);
                    /* try { // try from 0331174c to 03411777 has its CatchHandler @ 033119d4 */
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
                    /* try { // try from 03311880 to 03411887 has its CatchHandler @ 0331199c */
    return (UnityEngine_Sprite_o *)x;
  }
  values = (System_String_array *)FUN_01bab718(string___TypeInfo,5);
  if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  if ((int)values->max_length != 0) {
                    /* try { // try from 033117ac to 034117b7 has its CatchHandler @ 033119cc */
    values->m_Items[0] = StringLiteral_10266;
    thunk_FUN_01c20e04(values->m_Items);
    if (1 < (uint)values->max_length) {
                    /* try { // try from 033117c8 to 034117cf has its CatchHandler @ 033119c8 */
      values->m_Items[1] = NPNDHEBBEAD;
                    /* try { // try from 033117d4 to 034117db has its CatchHandler @ 033119c0 */
      thunk_FUN_01c20e04(values->m_Items + 1,NPNDHEBBEAD);
      if (2 < (uint)values->max_length) {
                    /* try { // try from 033117ec to 034117f3 has its CatchHandler @ 033119b8 */
        values->m_Items[2] = StringLiteral_881;
                    /* try { // try from 033117fc to 03411803 has its CatchHandler @ 033119b4 */
        thunk_FUN_01c20e04(values->m_Items + 2);
                    /* try { // try from 03311804 to 0341180f has its CatchHandler @ 033119a8 */
        if (3 < (uint)values->max_length) {
          values->m_Items[3] = DMCFDIBHCPD;
          thunk_FUN_01c20e04(values->m_Items + 3,DMCFDIBHCPD);
                    /* try { // try from 03311820 to 03411827 has its CatchHandler @ 033119ac */
          if (4 < (uint)values->max_length) {
                    /* try { // try from 03311838 to 0341186b has its CatchHandler @ 033119bc */
            values->m_Items[4] = StringLiteral_802;
            thunk_FUN_01c20e04();
            pSVar2 = System_String__Concat(values,(MethodInfo *)0x0);
            if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
              thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
            }
            UnityEngine_Debug__LogError((Il2CppObject *)pSVar2,(MethodInfo *)0x0);
            return (UnityEngine_Sprite_o *)x;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

