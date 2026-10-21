// OJHODFIGFMA$$POHJNBHBIFB @ RVA 0x32415EC

OJHODFIGFMA_MJOLIJOPBMO_o *
OJHODFIGFMA__POHJNBHBIFB(OJHODFIGFMA_o *__this,System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  OJHODFIGFMA_MJOLIJOPBMO_o *pOVar3;
  OJHODFIGFMA_EMMLKOABOHF_o *pOVar4;
  
                    /* try { // try from 033415fc to 034415ff has its CatchHandler @ 03341604 */
                    /* try { // try from 03341600 to 0344161f has its CatchHandler @ 0334150c */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033415fc with catch @ 03341604
                        */
  if ((DAT_0456708c & 1) == 0) {
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 033415a0 with catch @ 03341608
                        */
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_ContainsKey__
                );
    FUN_01bab630(&
                 Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                );
                    /* try { // try from 03341620 to 03441623 has its CatchHandler @ 0334164c */
                    /* try { // try from 03341624 to 03441653 has its CatchHandler @ 0334150c */
    DAT_0456708c = 1;
  }
  pOVar4 = (__this->fields).HEHMPFLAEGE;
  if ((pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
     (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
               (pOVar4->fields).IAGNJPIIEPO,
     pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
    bVar1 = System_Collections_Generic_Dictionary<object,_object>__ContainsKey
                      (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                       Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_ContainsKey__
                      );
                    /* catch() { ... } // from try @ 03341620 with catch @ 0334164c */
    if (!bVar1) {
      return (OJHODFIGFMA_MJOLIJOPBMO_o *)0x0;
    }
    pOVar4 = (__this->fields).HEHMPFLAEGE;
                    /* try { // try from 03341654 to 0344165b has its CatchHandler @ 03341670 */
                    /* try { // try from 0334165c to 03441667 has its CatchHandler @ 0334150c */
    if ((pOVar4 != (OJHODFIGFMA_EMMLKOABOHF_o *)0x0) &&
       (pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
                 (pOVar4->fields).IAGNJPIIEPO,
       pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) {
                    /* try { // try from 03341668 to 0344166f has its CatchHandler @ 03341670 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03341654 with catch @ 03341670
                       catch(type#2 @ 00000000) { ... } // from try @ 03341668 with catch @ 03341670
                        */
                    /* try { // try from 03341674 to 0344171f has its CatchHandler @ 03341674
                       catch() { ... } // from try @ 03341674 with catch @ 03341674
                       catch() { ... } // from try @ 03341764 with catch @ 03341674
                       catch() { ... } // from try @ 033417bc with catch @ 03341674
                       catch() { ... } // from try @ 033417ec with catch @ 03341674
                       catch() { ... } // from try @ 03341838 with catch @ 03341674 */
      pOVar3 = (OJHODFIGFMA_MJOLIJOPBMO_o *)
               System_Collections_Generic_Dictionary<object,_object>__get_Item
                         (pSVar2,(Il2CppObject *)KGLJICLJHEL,
                          Method_System_Collections_Generic_Dictionary<string,_OJHODFIGFMA_MJOLIJOPBMO>_get_Item__
                         );
      return pOVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

