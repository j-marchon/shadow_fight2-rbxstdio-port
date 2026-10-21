// HDNBOMFNDFJ$$DGCODECJJCC @ RVA 0x33A0FE4

bool HDNBOMFNDFJ__DGCODECJJCC(HDNBOMFNDFJ_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  CodeStage_AntiCheat_ObscuredTypes_ObscuredString_o *pCVar3;
  OLKKAIFGGAK_o *pOVar4;
  HOOAAGABMBL_o *pHVar5;
  MethodInfo *method_00;
  HOOAAGABMBL_o **ppHVar6;
  
  ppHVar6 = &(__this->fields).MHDJAEILAJL;
                    /* try { // try from 034a0ff0 to 035a0fff has its CatchHandler @ 034a113c */
  if (*ppHVar6 == (HOOAAGABMBL_o *)0x0) {
    pOVar4 = (__this->fields).super.HMMEFNNMBJK;
    if (pOVar4 == (OLKKAIFGGAK_o *)0x0) goto LAB_034a10c8;
    pOVar4 = OLKKAIFGGAK__GMBBOANEBJJ(pOVar4,(__this->fields).EOPBEKGNABN,(MethodInfo *)0x0);
    if (pOVar4 == (OLKKAIFGGAK_o *)0x0) {
      return false;
    }
    pHVar5 = HDNBOMFNDFJ__AAJGHPJPEGO(__this,method_00);
                    /* try { // try from 034a1078 to 035a107b has its CatchHandler @ 034a117c */
                    /* try { // try from 034a107c to 035a107f has its CatchHandler @ 034a1164 */
    (__this->fields).MHDJAEILAJL = pHVar5;
                    /* try { // try from 034a1080 to 035a1083 has its CatchHandler @ 034a1160 */
                    /* try { // try from 034a1084 to 035a1087 has its CatchHandler @ 034a115c */
    thunk_FUN_01c20e04(ppHVar6,pHVar5);
                    /* try { // try from 034a1088 to 035a108b has its CatchHandler @ 034a1178 */
                    /* try { // try from 034a108c to 035a108f has its CatchHandler @ 034a117c */
    if ((__this->fields).MHDJAEILAJL != (HOOAAGABMBL_o *)0x0) goto LAB_034a0ffc;
LAB_034a1090:
                    /* try { // try from 034a1090 to 035a1097 has its CatchHandler @ 034a1174 */
    bVar1 = false;
  }
  else {
LAB_034a0ffc:
                    /* try { // try from 034a1000 to 035a100b has its CatchHandler @ 034a1168 */
    pSVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       ((__this->fields).HANDJABEIBK,(MethodInfo *)0x0);
                    /* try { // try from 034a100c to 035a1077 has its CatchHandler @ 034a0a68 */
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
      if (*ppHVar6 == (HOOAAGABMBL_o *)0x0) goto LAB_034a10c8;
      pCVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                         (((*ppHVar6)->fields)._DKODBGOHKGH_k__BackingField,(MethodInfo *)0x0);
      bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__LCAEEPKOHMN
                        (pCVar3,(__this->fields).HANDJABEIBK,(MethodInfo *)0x0);
      if (!bVar1) goto LAB_034a1090;
    }
    pSVar2 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                       ((__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD(pSVar2,(MethodInfo *)0x0);
    if (!bVar1) {
                    /* try { // try from 034a10a0 to 035a10a3 has its CatchHandler @ 034a114c */
                    /* try { // try from 034a10a4 to 035a10a7 has its CatchHandler @ 034a1148 */
      if (*ppHVar6 != (HOOAAGABMBL_o *)0x0) {
                    /* try { // try from 034a10a8 to 035a10ab has its CatchHandler @ 034a0a68 */
                    /* try { // try from 034a10ac to 035a10af has its CatchHandler @ 034a1118 */
                    /* try { // try from 034a10b0 to 035a10b3 has its CatchHandler @ 034a1110 */
        pCVar3 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__ALBJPLAPOBO
                           (((*ppHVar6)->fields)._COIPKAKHDFP_k__BackingField,(MethodInfo *)0x0);
                    /* try { // try from 034a10b4 to 035a10b7 has its CatchHandler @ 034a10d0 */
                    /* catch() { ... } // from try @ 034a0e9c with catch @ 034a10b8
                       try { // try from 034a10b8 to 035a1193 has its CatchHandler @ 034a0a68 */
                    /* catch() { ... } // from try @ 034a0d74 with catch @ 034a10bc */
                    /* catch() { ... } // from try @ 034a0ce4 with catch @ 034a10c0 */
                    /* catch() { ... } // from try @ 034a0e50 with catch @ 034a10c4 */
        bVar1 = CodeStage_AntiCheat_ObscuredTypes_ObscuredString__LCAEEPKOHMN
                          (pCVar3,(__this->fields).MLPKGJACOFA,(MethodInfo *)0x0);
        return bVar1;
      }
LAB_034a10c8:
                    /* WARNING: Subroutine does not return */
                    /* catch() { ... } // from try @ 034a0eb0 with catch @ 034a10c8 */
      FUN_01bab8c8();
    }
    bVar1 = true;
  }
                    /* try { // try from 034a1098 to 035a109b has its CatchHandler @ 034a1178 */
                    /* try { // try from 034a109c to 035a109f has its CatchHandler @ 034a1150 */
  return bVar1;
}

