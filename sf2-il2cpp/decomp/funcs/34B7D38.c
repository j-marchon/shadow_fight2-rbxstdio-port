// KLPJOKOFLJD.EDDJLFOOBCI$$GetHashCode @ RVA 0x34B7D38

int32_t KLPJOKOFLJD_EDDJLFOOBCI__GetHashCode
                  (KLPJOKOFLJD_EDDJLFOOBCI_o *__this,System_Byte_array *PMACBPAMPJA,
                  MethodInfo *method)

{
  int32_t iVar1;
  System_Func_int__byte__int__o **ppSVar2;
  System_ArgumentNullException_o *__this_00;
  System_String_o *paramName;
  undefined8 uVar3;
  System_Func_int__byte__int__o *func;
  
                    /* try { // try from 035b7d50 to 036b7dbf has its CatchHandler @ 035b7b90 */
  if ((DAT_045685a2 & 1) == 0) {
    FUN_01bab630(&Method_System_Linq_Enumerable_Aggregate<byte,_int>__);
    FUN_01bab630(&System_Func<int,_byte,_int>_TypeInfo);
    FUN_01bab630(&Method_KLPJOKOFLJD_EDDJLFOOBCI_<>c_BEBLEDHIPKL__);
    FUN_01bab630(&KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo);
    DAT_045685a2 = 1;
  }
  if (PMACBPAMPJA != (System_Byte_array *)0x0) {
    if ((KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    func = KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo->static_fields->__9__1_0;
    if (func == (System_Func_int__byte__int__o *)0x0) {
                    /* try { // try from 035b7dc0 to 036b7dc3 has its CatchHandler @ 035b7ddc */
                    /* try { // try from 035b7dc4 to 036b7dcb has its CatchHandler @ 035b7dd4 */
      if ((KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo->_2).cctor_finished == 0) {
        thunk_FUN_01ba7564();
                    /* try { // try from 035b7dcc to 036b7df7 has its CatchHandler @ 035b7b90 */
      }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7d2c with catch @ 035b7dd0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7dc4 with catch @ 035b7dd4
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7ce0 with catch @ 035b7dd8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7dc0 with catch @ 035b7ddc
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7cc0 with catch @ 035b7de0
                        */
      func = (System_Func_int__byte__int__o *)
             thunk_FUN_01bda818(System_Func<int,_byte,_int>_TypeInfo);
                    /* try { // try from 035b7df8 to 036b7dfb has its CatchHandler @ 035b7e1c */
                    /* try { // try from 035b7dfc to 036b7e23 has its CatchHandler @ 035b7b90 */
      System_Func<int,_byte,_int>___ctor();
      ppSVar2 = &KLPJOKOFLJD_EDDJLFOOBCI_<>c_TypeInfo->static_fields->__9__1_0;
      *ppSVar2 = func;
      thunk_FUN_01c20e04(ppSVar2,func);
    }
                    /* catch() { ... } // from try @ 035b7df8 with catch @ 035b7e1c */
                    /* try { // try from 035b7e24 to 036b7e2b has its CatchHandler @ 035b7e40 */
                    /* try { // try from 035b7e2c to 036b7e37 has its CatchHandler @ 035b7b90 */
    iVar1 = System_Linq_Enumerable__Aggregate<byte,_int>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)PMACBPAMPJA,0,
                       (System_Func_TAccumulate__TSource__TAccumulate__o *)func,
                       Method_System_Linq_Enumerable_Aggregate<byte,_int>__);
    return iVar1;
  }
                    /* try { // try from 035b7e38 to 036b7e3f has its CatchHandler @ 035b7e40 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 035b7e24 with catch @ 035b7e40
                       catch(type#2 @ 00000000) { ... } // from try @ 035b7e38 with catch @ 035b7e40
                        */
  thunk_FUN_01bb9178(&System_ArgumentNullException_TypeInfo);
                    /* try { // try from 035b7e44 to 036b7f33 has its CatchHandler @ 035b7e44
                       catch() { ... } // from try @ 035b7e44 with catch @ 035b7e44
                       catch() { ... } // from try @ 035b7fa8 with catch @ 035b7e44
                       catch() { ... } // from try @ 035b7fe8 with catch @ 035b7e44
                       catch() { ... } // from try @ 035b8018 with catch @ 035b7e44
                       catch() { ... } // from try @ 035b8048 with catch @ 035b7e44 */
  __this_00 = (System_ArgumentNullException_o *)thunk_FUN_01bda818();
  paramName = (System_String_o *)thunk_FUN_01bb9178(&StringLiteral_19289);
  System_ArgumentNullException___ctor(__this_00,paramName,(MethodInfo *)0x0);
  uVar3 = thunk_FUN_01bb9178(&Method_KLPJOKOFLJD_EDDJLFOOBCI_GetHashCode__);
                    /* WARNING: Subroutine does not return */
  FUN_01bab798(__this_00,uVar3);
}

