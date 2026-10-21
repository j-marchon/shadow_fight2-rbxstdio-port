// TypeDefIndex 1428
// Namespace: 
// public class EBDHLIBNKFH : HPEENDCCJND
// Fields:

// ===== protected override void ODGFCLOEKJD()  [RVA 0x318370C]
// EBDHLIBNKFH$$ODGFCLOEKJD @ RVA 0x318370C

void EBDHLIBNKFH__ODGFCLOEKJD(EBDHLIBNKFH_o *__this,MethodInfo *method)

{
  Il2CppObject *MNODCIGLHEL;
  int iVar1;
  double local_28;
  
  if ((DAT_045669ca & 1) == 0) {
                    /* try { // try from 03283728 to 0338374f has its CatchHandler @ 03283814 */
    FUN_01bab630(&double_TypeInfo);
    DAT_045669ca = 1;
  }
  iVar1 = 10;
  do {
                    /* try { // try from 03283750 to 033837f7 has its CatchHandler @ 032835d0 */
    local_28 = HPEENDCCJND__BKIOCBDNBNF((HPEENDCCJND_o *)__this,-1000,1000,(MethodInfo *)0x0);
    MNODCIGLHEL = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_28);
    HPEENDCCJND__JEKKKDMPLEN((HPEENDCCJND_o *)__this,MNODCIGLHEL,(MethodInfo *)0x0);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}


// ===== protected override object CJOHHBMFAAG()  [RVA 0x3183794]
// EBDHLIBNKFH$$CJOHHBMFAAG @ RVA 0x3183794

Il2CppObject * EBDHLIBNKFH__CJOHHBMFAAG(EBDHLIBNKFH_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double local_58;
  
  if ((DAT_045669cb & 1) == 0) {
    FUN_01bab630(&double_TypeInfo);
    FUN_01bab630(&System_Math_TypeInfo);
    DAT_045669cb = 1;
  }
                    /* try { // try from 032837f8 to 033837fb has its CatchHandler @ 03283810 */
  dVar2 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,1,(MethodInfo *)0x0);
                    /* try { // try from 032837fc to 033837ff has its CatchHandler @ 032835d0 */
                    /* try { // try from 03283800 to 03383803 has its CatchHandler @ 0328380c */
                    /* try { // try from 03283804 to 0338382f has its CatchHandler @ 032835d0 */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03283800 with catch @ 0328380c
                        */
  dVar3 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,2,(MethodInfo *)0x0);
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032837f8 with catch @ 03283810
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03283728 with catch @ 03283814
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 032836c8 with catch @ 03283818
                        */
  dVar4 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,3,(MethodInfo *)0x0);
                    /* try { // try from 03283830 to 03383833 has its CatchHandler @ 03283840 */
  dVar5 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,4,(MethodInfo *)0x0);
                    /* catch() { ... } // from try @ 03283830 with catch @ 03283840 */
  if ((System_Math_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  dVar6 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,5,(MethodInfo *)0x0);
  dVar7 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
                    /* try { // try from 03283880 to 033838a7 has its CatchHandler @ 032838bc */
  dVar8 = HPEENDCCJND__GGLNDGHIMDJ((HPEENDCCJND_o *)__this,6,(MethodInfo *)0x0);
                    /* try { // try from 032838a8 to 033838b3 has its CatchHandler @ 032835d0 */
  local_58 = HPEENDCCJND__AJKIGPMHEEO
                       ((HPEENDCCJND_o *)__this,
                        ((dVar2 * dVar3 * dVar4 - ABS(dVar5)) - dVar6) + dVar7 + dVar8,
                        (MethodInfo *)0x0);
                    /* try { // try from 032838b4 to 033838bb has its CatchHandler @ 032838bc */
  pIVar1 = (Il2CppObject *)thunk_FUN_01bda448(double_TypeInfo,&local_58);
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03283880 with catch @ 032838bc
                       catch(type#2 @ 00000000) { ... } // from try @ 032838b4 with catch @ 032838bc
                        */
  return pIVar1;
}


// ===== public void .ctor()  [RVA 0x31838D8]
// EBDHLIBNKFH$$.ctor @ RVA 0x31838D8

void EBDHLIBNKFH___ctor(EBDHLIBNKFH_o *__this,MethodInfo *method)

{
  HPEENDCCJND___ctor((HPEENDCCJND_o *)__this,(MethodInfo *)0x0);
  return;
}


// ===== protected override string AKPPNIPNKDH()  [RVA 0x31838E0]
// EBDHLIBNKFH$$AKPPNIPNKDH @ RVA 0x31838E0

System_String_o * EBDHLIBNKFH__AKPPNIPNKDH(EBDHLIBNKFH_o *__this,MethodInfo *method)

{
  if ((DAT_045669cc & 1) == 0) {
    FUN_01bab630(&StringLiteral_1371/*"-v1*(-(v2))*(-(-(v3))) +  -abs(-(v4)) - --v5 + v6 + +++++v6"*/);
    DAT_045669cc = 1;
  }
  return StringLiteral_1371/*"-v1*(-(v2))*(-(-(v3))) +  -abs(-(v4)) - --v5 + v6 + +++++v6"*/;
}

