// FCJBEKHDLAF$$AAPDPFPLEKF @ RVA 0x33EF75C

System_Collections_IEnumerator_o *
FCJBEKHDLAF__AAPDPFPLEKF
          (FCJBEKHDLAF_o *__this,UnityEngine_Color_o EFJKPCADGJH,int32_t ABKNPBMGHKH,
          bool LFKDFCGLHLC,MethodInfo *method)

{
  FCJBEKHDLAF_AONMAECAFAD_o *__this_00;
  FCJBEKHDLAF_o **ppFVar1;
  
                    /* try { // try from 034ef788 to 035ef7ab has its CatchHandler @ 034ef898 */
  if ((DAT_04567f38 & 1) == 0) {
    FUN_01bab630(&FCJBEKHDLAF_AONMAECAFAD_TypeInfo);
    DAT_04567f38 = 1;
  }
  __this_00 = (FCJBEKHDLAF_AONMAECAFAD_o *)thunk_FUN_01bda818(FCJBEKHDLAF_AONMAECAFAD_TypeInfo);
  FCJBEKHDLAF_AONMAECAFAD___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (FCJBEKHDLAF_AONMAECAFAD_o *)0x0) {
    ppFVar1 = &(__this_00->fields).__4__this;
                    /* try { // try from 034ef7d0 to 035ef7d7 has its CatchHandler @ 034ef8a4 */
    *ppFVar1 = __this;
    thunk_FUN_01c20e04(ppFVar1,__this);
    (__this_00->fields).color.fields.r = EFJKPCADGJH.fields.r;
    (__this_00->fields).color.fields.g = EFJKPCADGJH.fields.g;
    (__this_00->fields).color.fields.b = EFJKPCADGJH.fields.b;
    (__this_00->fields).color.fields.a = EFJKPCADGJH.fields.a;
    (__this_00->fields).frames = ABKNPBMGHKH;
    (__this_00->fields).show = LFKDFCGLHLC;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

