// HOOAAGABMBL$$FAOBHLCDKJI @ RVA 0x30F11E4

HOOAAGABMBL_o * HOOAAGABMBL__FAOBHLCDKJI(HOOAAGABMBL_o *__this,MethodInfo *method)

{
  int32_t length;
  HOOAAGABMBL_o *__this_00;
  NMAHEBEALAB_o *pNVar1;
  MethodInfo *extraout_x1;
  MethodInfo *in_x2;
  System_Collections_Generic_List_PKKLIJLIKGF__o *pSVar2;
  NMAHEBEALAB_o *pNVar3;
  
  if ((DAT_04566426 & 1) == 0) {
    FUN_01bab630(&HOOAAGABMBL_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<PKKLIJLIKGF>_Clear__);
                    /* try { // try from 031f1220 to 032f1227 has its CatchHandler @ 031f136c */
    FUN_01bab630(&NMAHEBEALAB_TypeInfo);
                    /* try { // try from 031f1230 to 032f1237 has its CatchHandler @ 031f1360 */
    DAT_04566426 = 1;
    method = extraout_x1;
  }
  __this_00 = (HOOAAGABMBL_o *)thunk_FUN_01bda818(HOOAAGABMBL_TypeInfo,method);
                    /* try { // try from 031f1240 to 032f124b has its CatchHandler @ 031f1368 */
  HOOAAGABMBL___ctor(__this_00,__this,in_x2);
                    /* try { // try from 031f124c to 032f128b has its CatchHandler @ 031f1184 */
  if ((__this_00 != (HOOAAGABMBL_o *)0x0) &&
     (pSVar2 = (__this_00->fields)._LCJBEIKDDNA_k__BackingField,
     pSVar2 != (System_Collections_Generic_List_PKKLIJLIKGF__o *)0x0)) {
    length = (pSVar2->fields)._size;
    (pSVar2->fields)._size = 0;
    (pSVar2->fields)._version = (pSVar2->fields)._version + 1;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    pNVar3 = (__this->fields).DLBFLPBOJNI;
    if (pNVar3 != (NMAHEBEALAB_o *)0x0) {
                    /* try { // try from 031f128c to 032f1293 has its CatchHandler @ 031f12fc */
      pNVar1 = (NMAHEBEALAB_o *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
                    /* try { // try from 031f129c to 032f12a3 has its CatchHandler @ 031f12f0 */
      NMAHEBEALAB___ctor(pNVar1,pNVar3,(MethodInfo *)0x0);
      (__this_00->fields).DLBFLPBOJNI = pNVar1;
                    /* try { // try from 031f12ac to 032f12b7 has its CatchHandler @ 031f12f4 */
      thunk_FUN_01c20e04(&(__this_00->fields).DLBFLPBOJNI,pNVar1);
    }
    pNVar3 = (__this->fields).LDIJKGOHMPG;
    if (pNVar3 != (NMAHEBEALAB_o *)0x0) {
                    /* try { // try from 031f12b8 to 032f12e3 has its CatchHandler @ 031f1184 */
      pNVar1 = (NMAHEBEALAB_o *)thunk_FUN_01bda818(NMAHEBEALAB_TypeInfo);
      NMAHEBEALAB___ctor(pNVar1,pNVar3,(MethodInfo *)0x0);
      (__this_00->fields).LDIJKGOHMPG = pNVar1;
      thunk_FUN_01c20e04(&(__this_00->fields).LDIJKGOHMPG,pNVar1);
    }
                    /* try { // try from 031f12e4 to 032f12e7 has its CatchHandler @ 031f1364 */
                    /* try { // try from 031f12e8 to 032f12eb has its CatchHandler @ 031f12f8 */
                    /* try { // try from 031f12ec to 032f1313 has its CatchHandler @ 031f1184 */
                    /* catch() { ... } // from try @ 031f129c with catch @ 031f12f0 */
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 031f12ac with catch @ 031f12f4 */
  FUN_01bab8c8();
}

