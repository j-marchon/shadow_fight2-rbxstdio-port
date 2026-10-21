// BHNHMJNIAII$$.cctor @ RVA 0x34B7F40

void BHNHMJNIAII___cctor(MethodInfo *method)

{
  System_Char_array *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o **ppSVar2;
  
  if ((DAT_045685a4 & 1) == 0) {
    FUN_01bab630(&BHNHMJNIAII_TypeInfo);
    FUN_01bab630(&char___TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>__ctor__);
    FUN_01bab630(&System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_TypeInfo);
                    /* try { // try from 035b7f8c to 036b7fa7 has its CatchHandler @ 035b7fec */
    DAT_045685a4 = 1;
  }
  pSVar1 = (System_Char_array *)FUN_01bab718(char___TypeInfo,1);
  if (pSVar1 != (System_Char_array *)0x0) {
                    /* try { // try from 035b7fa8 to 036b7fcf has its CatchHandler @ 035b7e44 */
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = 0x20;
                    /* try { // try from 035b7fd0 to 036b7fd7 has its CatchHandler @ 035b7ff0 */
      BHNHMJNIAII_TypeInfo->static_fields->AOACINBPMPP = pSVar1;
                    /* try { // try from 035b7fd8 to 036b7fe7 has its CatchHandler @ 035b7ffc */
      thunk_FUN_01c20e04(BHNHMJNIAII_TypeInfo->static_fields);
                    /* try { // try from 035b7fe8 to 036b8013 has its CatchHandler @ 035b7e44 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7f8c with catch @ 035b7fec
                        */
      __this = (System_Collections_Generic_Dictionary_object__object__o *)
               thunk_FUN_01bda818(
                                 System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>_TypeInfo
                                 );
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7fd0 with catch @ 035b7ff0
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7f34 with catch @ 035b7ff4
                        */
      System_Collections_Generic_Dictionary<object,_object>___ctor
                (__this,Method_System_Collections_Generic_Dictionary<string,_IEJKLPPLHMO>__ctor__);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 035b7fd8 with catch @ 035b7ffc
                        */
      ppSVar2 = &BHNHMJNIAII_TypeInfo->static_fields->HFAKMNMMBLD;
      *ppSVar2 = (System_Collections_Generic_Dictionary_string__IEJKLPPLHMO__o *)__this;
                    /* try { // try from 035b8014 to 036b8017 has its CatchHandler @ 035b8038 */
      thunk_FUN_01c20e04(ppSVar2,__this);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8d0();
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 035b8018 to 036b803f has its CatchHandler @ 035b7e44 */
  FUN_01bab8c8();
}

