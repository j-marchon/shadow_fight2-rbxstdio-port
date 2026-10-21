// CFBGPBCDAGA$$HPBCENEFAMD @ RVA 0x31B5998

UnityEngine_Color_o
CFBGPBCDAGA__HPBCENEFAMD
          (System_String_o *GKBNFBINIIP,float BCEJOJECHDA,System_Nullable_Color__o *NGFCPILIEFN,
          MethodInfo *method)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint8_t uVar4;
  System_String_o *pSVar5;
  long lVar6;
  System_String_o *value;
  int startIndex;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  
                    /* try { // try from 032b59ac to 033b59af has its CatchHandler @ 032b5a98 */
                    /* try { // try from 032b59b0 to 033b59bf has its CatchHandler @ 032b5aa8 */
  if ((DAT_04566bb7 & 1) == 0) {
    FUN_01bab630(&byte___TypeInfo);
                    /* try { // try from 032b59d8 to 033b59db has its CatchHandler @ 032b5a90 */
                    /* try { // try from 032b59dc to 033b59eb has its CatchHandler @ 032b5aa4 */
    FUN_01bab630(&System_Convert_TypeInfo);
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&Method_System_Nullable<Color>_GetValueOrDefault__);
    FUN_01bab630(&Method_System_Nullable<Color>_get_HasValue__);
    FUN_01bab630(&StringLiteral_644);
    FUN_01bab630(&StringLiteral_802);
    FUN_01bab630(&StringLiteral_1603);
                    /* try { // try from 032b5a34 to 033b5a4f has its CatchHandler @ 032b5a94 */
    FUN_01bab630(&StringLiteral_15438);
    FUN_01bab630(&StringLiteral_1);
    DAT_04566bb7 = 1;
  }
                    /* try { // try from 032b5a50 to 033b5a7f has its CatchHandler @ 032b5818 */
  bVar3 = PCOEHCPGBBG__BDLEIEHBFAD(GKBNFBINIIP,(MethodInfo *)0x0);
  if (!bVar3) {
                    /* try { // try from 032b5a80 to 033b5a83 has its CatchHandler @ 032b5a9c */
                    /* try { // try from 032b5a84 to 033b5a8b has its CatchHandler @ 032b5aa0 */
                    /* try { // try from 032b5a8c to 033b5ac3 has its CatchHandler @ 032b5818 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b59d8 with catch @ 032b5a90
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5a34 with catch @ 032b5a94
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b59ac with catch @ 032b5a98
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5a80 with catch @ 032b5a9c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5a84 with catch @ 032b5aa0
                        */
    if (((GKBNFBINIIP == (System_String_o *)0x0) ||
        (pSVar5 = System_String__Replace
                            (GKBNFBINIIP,StringLiteral_644,StringLiteral_1,(MethodInfo *)0x0),
        pSVar5 == (System_String_o *)0x0)) ||
       (pSVar5 = System_String__Replace(pSVar5,StringLiteral_1603,StringLiteral_1,(MethodInfo *)0x0)
       , pSVar5 == (System_String_o *)0x0)) {
LAB_032b5c64:
                    /* WARNING: Subroutine does not return */
      FUN_01bab8c8();
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b59dc with catch @ 032b5aa4
                        */
    uVar1 = (pSVar5->fields)._stringLength;
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b59b0 with catch @ 032b5aa8
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032b5958 with catch @ 032b5aac
                        */
    if ((uVar1 == 6) || (uVar1 == 8)) {
                    /* try { // try from 032b5ac4 to 033b5ac7 has its CatchHandler @ 032b5ae8 */
                    /* try { // try from 032b5ac8 to 033b5aef has its CatchHandler @ 032b5818 */
      lVar6 = FUN_01bab718(byte___TypeInfo,4);
      if (lVar6 == 0) goto LAB_032b5c64;
      if (*(uint *)(lVar6 + 0x18) < 4) {
LAB_032b5c68:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8d0();
      }
                    /* catch() { ... } // from try @ 032b5ac4 with catch @ 032b5ae8 */
                    /* try { // try from 032b5af0 to 033b5af7 has its CatchHandler @ 032b5b0c */
                    /* try { // try from 032b5af8 to 033b5b03 has its CatchHandler @ 032b5818 */
      *(char *)(lVar6 + 0x23) = (char)(int)(BCEJOJECHDA * 255.0);
                    /* try { // try from 032b5b04 to 033b5b0b has its CatchHandler @ 032b5b0c */
      startIndex = 0;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 032b5af0 with catch @ 032b5b0c
                       catch(type#2 @ 00000000) { ... } // from try @ 032b5b04 with catch @ 032b5b0c
                        */
      uVar7 = 0;
      do {
        value = System_String__Substring(pSVar5,startIndex,2,(MethodInfo *)0x0);
        if ((System_Convert_TypeInfo->_2).cctor_finished == 0) {
          thunk_FUN_01ba7564();
        }
        uVar4 = System_Convert__ToByte(value,0x10,(MethodInfo *)0x0);
        uVar2 = *(uint *)(lVar6 + 0x18);
        if (uVar2 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_01bab8d0();
        }
        *(uint8_t *)(lVar6 + 0x20 + uVar7) = uVar4;
        uVar7 = uVar7 + 1;
        startIndex = startIndex + 2;
      } while (uVar1 >> 1 != uVar7);
      if (((uVar2 == 0) || (uVar2 == 1)) || ((uVar2 < 3 || (uVar2 == 3)))) goto LAB_032b5c68;
      fVar10 = (float)NEON_ucvtf((uint)*(byte *)(lVar6 + 0x22));
      fVar11 = (float)NEON_ucvtf((uint)*(byte *)(lVar6 + 0x23));
      fVar8 = (float)*(byte *)(lVar6 + 0x20) / 255.0;
      fVar9 = (float)*(byte *)(lVar6 + 0x21) / 255.0;
      fVar10 = fVar10 / 255.0;
      fVar11 = fVar11 / 255.0;
      goto LAB_032b5c3c;
    }
    pSVar5 = System_String__Concat(StringLiteral_15438,pSVar5,StringLiteral_802,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  }
  if ((NGFCPILIEFN->fields).hasValue == false) {
    fVar10 = 0.0;
    fVar11 = 1.0;
    fVar9 = 0.0;
    fVar8 = 0.0;
  }
  else {
    fVar10 = (NGFCPILIEFN->fields).value.fields.b;
    fVar11 = (NGFCPILIEFN->fields).value.fields.a;
    fVar8 = (NGFCPILIEFN->fields).value.fields.r;
    fVar9 = (NGFCPILIEFN->fields).value.fields.g;
  }
LAB_032b5c3c:
  UVar12.fields.g = fVar9;
  UVar12.fields.r = fVar8;
  UVar12.fields.a = fVar11;
  UVar12.fields.b = fVar10;
  return (UnityEngine_Color_o)UVar12.fields;
}

