// FEPPOONJCGI$$LMEMHLHEKIB @ RVA 0x30B23F0

void FEPPOONJCGI__LMEMHLHEKIB
               (FEPPOONJCGI_o *__this,System_String_o *KGLJICLJHEL,int32_t CJNHFNHJHPE,
               MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  System_Xml_XmlElement_o *AHDGNOJPPIB;
  PANJAHAFBMD_o *__this_00;
  System_Collections_Generic_List_PANJAHAFBMD__o *__this_01;
  PANJAHAFBMD_array *pPVar3;
  
                    /* try { // try from 031b2400 to 032b2403 has its CatchHandler @ 031b27c4 */
                    /* try { // try from 031b2404 to 032b2457 has its CatchHandler @ 031b0e98 */
  if ((DAT_045661eb & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<PANJAHAFBMD>_Add__);
    FUN_01bab630(&PANJAHAFBMD_TypeInfo);
    FUN_01bab630(&StringLiteral_4830);
    DAT_045661eb = 1;
  }
                    /* try { // try from 031b2458 to 032b245f has its CatchHandler @ 031b2960 */
  AHDGNOJPPIB = EIABCPKDEBD__BHPIHHJHELJ
                          ((__this->fields).EJPMDLJLIMB,StringLiteral_4830,(MethodInfo *)0x0);
  __this_00 = (PANJAHAFBMD_o *)thunk_FUN_01bda818(PANJAHAFBMD_TypeInfo);
  PANJAHAFBMD___ctor(__this_00,(System_Xml_XmlNode_o *)AHDGNOJPPIB,(MethodInfo *)0x0);
  if (__this_00 != (PANJAHAFBMD_o *)0x0) {
    PANJAHAFBMD__HCOCAAIGNNL(__this_00,KGLJICLJHEL,(MethodInfo *)0x0);
                    /* try { // try from 031b24a4 to 032b24ab has its CatchHandler @ 031b2894 */
    PANJAHAFBMD__ANDPGPBNPBC(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    lVar2 = Method_System_Collections_Generic_List<PANJAHAFBMD>_Add__;
    __this_01 = (__this->fields).MCDCFBOBJGI;
                    /* try { // try from 031b24ac to 032b24fb has its CatchHandler @ 031b0e98 */
    if (__this_01 != (System_Collections_Generic_List_PANJAHAFBMD__o *)0x0) {
      pPVar3 = (__this_01->fields)._items;
      (__this_01->fields)._version = (__this_01->fields)._version + 1;
      if (pPVar3 != (PANJAHAFBMD_array *)0x0) {
        uVar1 = (__this_01->fields)._size;
        if (uVar1 < (uint)pPVar3->max_length) {
          (__this_01->fields)._size = uVar1 + 1;
          pPVar3->m_Items[(int)uVar1] = __this_00;
                    /* try { // try from 031b24fc to 032b2503 has its CatchHandler @ 031b28f4 */
          thunk_FUN_01c20e04(pPVar3->m_Items + (int)uVar1,__this_00);
          return;
        }
                    /* try { // try from 031b2524 to 032b252b has its CatchHandler @ 031b28d4 */
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)__this_00,
                   *(MethodInfo_26E4DAC **)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

