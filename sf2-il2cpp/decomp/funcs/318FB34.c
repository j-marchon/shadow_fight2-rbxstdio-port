// GOLIIBMCIEJ$$DLKKPFHKIPB @ RVA 0x318FB34

System_Collections_Generic_IEnumerable_string__o *
GOLIIBMCIEJ__DLKKPFHKIPB(GOLIIBMCIEJ_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Byte_array *MOPNMEHIMFJ;
  System_Byte_array *LFINFBNOLFG;
  System_String_o *item;
  MethodInfo *extraout_x1;
  System_Object_array *pSVar3;
  
                    /* try { // try from 0328fb3c to 0338fb47 has its CatchHandler @ 0328fb78 */
                    /* try { // try from 0328fb48 to 0338fb6b has its CatchHandler @ 0328fa74 */
                    /* try { // try from 0328fb6c to 0338fb6f has its CatchHandler @ 0328fb74 */
                    /* try { // try from 0328fb70 to 0338fb93 has its CatchHandler @ 0328fa74 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fb6c with catch @ 0328fb74
                        */
  if ((DAT_04566a37 & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fb3c with catch @ 0328fb78
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0328fb20 with catch @ 0328fb7c
                        */
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6017);
    FUN_01bab630(&Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6018);
                    /* try { // try from 0328fb94 to 0338fb97 has its CatchHandler @ 0328fbb8 */
                    /* try { // try from 0328fb98 to 0338fbbf has its CatchHandler @ 0328fa74 */
    FUN_01bab630(&byte___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>_Add__);
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
                    /* catch() { ... } // from try @ 0328fb94 with catch @ 0328fbb8 */
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
                    /* try { // try from 0328fbc0 to 0338fbc7 has its CatchHandler @ 0328fbdc */
    DAT_04566a37 = 1;
    method = extraout_x1;
  }
                    /* try { // try from 0328fbc8 to 0338fbd3 has its CatchHandler @ 0328fa74 */
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
                    /* try { // try from 0328fbd4 to 0338fbdb has its CatchHandler @ 0328fbdc */
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 0328fbc0 with catch @ 0328fbdc
                       catch(type#2 @ 00000000) { ... } // from try @ 0328fbd4 with catch @ 0328fbdc
                        */
                    /* try { // try from 0328fbe0 to 0338fd23 has its CatchHandler @ 0328fbe0
                       catch() { ... } // from try @ 0328fbe0 with catch @ 0328fbe0
                       catch() { ... } // from try @ 0328fe44 with catch @ 0328fbe0
                       catch() { ... } // from try @ 0328fedc with catch @ 0328fbe0
                       catch() { ... } // from try @ 0328fee4 with catch @ 0328fbe0
                       catch() { ... } // from try @ 0328ff98 with catch @ 0328fbe0 */
  MOPNMEHIMFJ = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)MOPNMEHIMFJ,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6017,(MethodInfo *)0x0);
  LFINFBNOLFG = (System_Byte_array *)FUN_01bab718(byte___TypeInfo,0x40);
  System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray
            ((System_Array_o *)LFINFBNOLFG,
             Field_PrivateImplementationDetailsQOELAJF_ArrayCopy64___field_6018,(MethodInfo *)0x0);
  item = OMHODMCHILE__NPKGDBHJKCK(MOPNMEHIMFJ,LFINFBNOLFG,(MethodInfo *)0x0);
  lVar2 = Method_System_Collections_Generic_List<string>_Add__;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar3 = (__this_00->fields)._items;
    (__this_00->fields)._version = (__this_00->fields)._version + 1;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar1 = (__this_00->fields)._size;
      if (uVar1 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar1 + 1;
        pSVar3->m_Items[(int)uVar1] = (Il2CppObject *)item;
        thunk_FUN_01c20e04();
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,(Il2CppObject *)item,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
      }
      return (System_Collections_Generic_IEnumerable_string__o *)__this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

