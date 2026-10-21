// OMANDMDCGMF$$IJOPPOBBLEO @ RVA 0x3298A30

bool OMANDMDCGMF__IJOPPOBBLEO
               (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *MMEECJEKHGB,int32_t BIBGGHMEPBI,
               int32_t HDLNCPGECMP,System_Collections_Generic_HashSet_char__array *HAKPMGCKCLB,
               MethodInfo *method)

{
  uint uVar1;
  uint16_t c;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *__this;
  Il2CppObject *pIVar5;
  MethodInfo *method_00;
  long lVar6;
  byte bVar7;
  
  if ((DAT_0456738e & 1) == 0) {
    FUN_01bab630(&char_TypeInfo);
    FUN_01bab630(&Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_0456738e = 1;
  }
  if (MMEECJEKHGB != (Nekki_SF2_GUI_TextPic_AIBKGOEIOLC_o *)0x0) {
    bVar2 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__BDLEIEHBFAD(MMEECJEKHGB,(MethodInfo *)0x0);
    if (HAKPMGCKCLB == (System_Collections_Generic_HashSet_char__array *)0x0) {
      return false;
    }
    if (bVar2) {
      return false;
    }
                    /* try { // try from 03398aa8 to 03498b4f has its CatchHandler @ 03398aa8
                       catch() { ... } // from try @ 03398aa8 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398bd4 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398c30 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398c74 with catch @ 03398aa8
                       catch() { ... } // from try @ 03398cb4 with catch @ 03398aa8 */
    uVar1 = (uint)HAKPMGCKCLB->max_length;
    if (0 < (int)uVar1) {
      lVar6 = 4;
      do {
        if (uVar1 <= (int)lVar6 - 4U) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        if (HAKPMGCKCLB->m_Items[lVar6 + -4] != (System_Collections_Generic_HashSet_char__o *)0x0) {
          iVar4 = Nekki_SF2_GUI_TextPic_AIBKGOEIOLC__IKMLAEGCJHC(MMEECJEKHGB,(MethodInfo *)0x0);
          if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
            thunk_FUN_01ba7564(System_Math_TypeInfo);
          }
          iVar4 = System_Math__Min(HDLNCPGECMP + 1,iVar4,(MethodInfo *)0x0);
          if (BIBGGHMEPBI < iVar4) {
                    /* try { // try from 03398b50 to 03498b57 has its CatchHandler @ 03398c58 */
            bVar7 = 0;
            bVar2 = true;
            goto LAB_03398b5c;
          }
          bVar7 = 0;
                    /* try { // try from 03398bd4 to 03498c23 has its CatchHandler @ 03398aa8 */
          bVar2 = true;
          goto LAB_03398bd8;
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 + -4 < (int)uVar1);
    }
    return false;
  }
LAB_03398bec:
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
LAB_03398b5c:
  __this = (MMEECJEKHGB->fields)._FEKFGIIMCOE_k__BackingField;
                    /* try { // try from 03398b64 to 03498b6b has its CatchHandler @ 03398c54 */
  if ((__this == (System_Collections_Generic_List_TextPic_AGJBBBFDHCF__o *)0x0) ||
     (method_00 = Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__,
     pIVar5 = System_Collections_Generic_List<object>__get_Item
                        ((System_Collections_Generic_List_object__o *)__this,BIBGGHMEPBI,
                         (MethodInfo_26E4ADC *)
                         Method_System_Collections_Generic_List<TextPic_AGJBBBFDHCF>_get_Item__),
     pIVar5 == (Il2CppObject *)0x0)) goto LAB_03398bec;
  c = *(uint16_t *)((long)&pIVar5[1].klass + 4);
                    /* try { // try from 03398b7c to 03498b83 has its CatchHandler @ 03398c3c */
  if ((char_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(char_TypeInfo);
  }
                    /* try { // try from 03398b8c to 03498b93 has its CatchHandler @ 03398c50 */
  bVar3 = System_Char__IsUpper(c,(MethodInfo *)0x0);
  if (bVar3) {
                    /* try { // try from 03398ba4 to 03498bab has its CatchHandler @ 03398c38 */
    bVar3 = OMANDMDCGMF__GOIFPODNLCH(c,HAKPMGCKCLB,method_00);
    if (!bVar3) {
      return (bool)(bVar2 ^ 1);
    }
    bVar7 = 1;
  }
  BIBGGHMEPBI = BIBGGHMEPBI + 1;
                    /* try { // try from 03398bb4 to 03498bbb has its CatchHandler @ 03398c4c */
  bVar2 = BIBGGHMEPBI < iVar4;
  if (iVar4 == BIBGGHMEPBI) {
    bVar2 = iVar4 <= BIBGGHMEPBI;
                    /* try { // try from 03398bcc to 03498bd3 has its CatchHandler @ 03398c44 */
LAB_03398bd8:
    return (bool)(bVar7 & bVar2);
  }
  goto LAB_03398b5c;
}

