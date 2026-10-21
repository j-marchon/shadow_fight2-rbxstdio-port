// AFFHKININGD$$CJOMAONPHEB @ RVA 0x33417B8

bool AFFHKININGD__CJOMAONPHEB(AFFHKININGD_o *__this,IEJGMGHPING_o *PFDEAPMMFAP,MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  bool bVar3;
  ACHLOMELAJE_o *__this_00;
  PAMEPBLOLPB_o *pPVar4;
  System_String_o *pSVar5;
  int32_t iVar6;
  System_Enum_o local_48;
  int local_38;
  
                    /* try { // try from 034417cc to 035417f3 has its CatchHandler @ 03441924 */
  if ((DAT_045679a2 & 1) == 0) {
    FUN_01bab630(&UnityEngine_Debug_TypeInfo);
    FUN_01bab630(&MOLNCMOLNHF_TypeInfo);
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&PALENEMJENB_TypeInfo);
    FUN_01bab630(&StringLiteral_6352);
    __this = (AFFHKININGD_o *)FUN_01bab630(&StringLiteral_6351);
    DAT_045679a2 = 1;
  }
                    /* try { // try from 03441828 to 0354184f has its CatchHandler @ 03441920 */
  if (PFDEAPMMFAP == (IEJGMGHPING_o *)0x0) {
LAB_03441a00:
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8(__this);
  }
  local_38 = (PFDEAPMMFAP->fields).NJEMGJNAGED;
  iVar1 = (PFDEAPMMFAP->fields).KPOBFGCNFAG;
  iVar2 = (PFDEAPMMFAP->fields).DGCODECJJCC;
  if (local_38 == 3) {
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
                    /* try { // try from 0344186c to 03541877 has its CatchHandler @ 03441914 */
      DAT_04565b7d = '\x01';
    }
                    /* try { // try from 03441878 to 035418f7 has its CatchHandler @ 03441690 */
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    __this_00 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    __this = (AFFHKININGD_o *)0x0;
    if (__this_00 == (ACHLOMELAJE_o *)0x0) goto LAB_03441a00;
    pPVar4 = ACHLOMELAJE__EKOLJIPEEHA(__this_00,(PFDEAPMMFAP->fields).NEEIBKGPKBK,(MethodInfo *)0x0)
    ;
    if (pPVar4 != (PAMEPBLOLPB_o *)0x0) {
      iVar6 = (pPVar4->fields).AAECGBAMDEL;
      goto LAB_0344191c;
    }
  }
  else {
    local_48.klass = (System_Enum_c *)PALENEMJENB_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat(StringLiteral_6352,pSVar5,(MethodInfo *)0x0);
                    /* try { // try from 034418f8 to 035418fb has its CatchHandler @ 0344191c */
                    /* try { // try from 034418fc to 035418ff has its CatchHandler @ 03441918 */
                    /* try { // try from 03441900 to 03541903 has its CatchHandler @ 03441690 */
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03441904 to 03541907 has its CatchHandler @ 03441910 */
                    /* try { // try from 03441908 to 03541933 has its CatchHandler @ 03441690 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441904 with catch @ 03441910
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 0344186c with catch @ 03441914
                        */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  }
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034418fc with catch @ 03441918
                        */
  iVar6 = 0;
LAB_0344191c:
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034418f8 with catch @ 0344191c
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03441828 with catch @ 03441920
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 034417cc with catch @ 03441924
                        */
                    /* try { // try from 03441934 to 03541937 has its CatchHandler @ 03441948 */
  switch(iVar2) {
  case 0:
    bVar3 = iVar1 <= iVar6;
                    /* catch() { ... } // from try @ 03441934 with catch @ 03441948 */
    break;
  case 1:
                    /* try { // try from 034419c0 to 03541afb has its CatchHandler @ 034419c0
                       catch() { ... } // from try @ 034419c0 with catch @ 034419c0
                       catch() { ... } // from try @ 03441ba8 with catch @ 034419c0
                       catch() { ... } // from try @ 03441c30 with catch @ 034419c0
                       catch() { ... } // from try @ 03441c38 with catch @ 034419c0
                       catch() { ... } // from try @ 03441cd8 with catch @ 034419c0 */
    bVar3 = iVar6 <= iVar1;
    break;
  case 2:
    bVar3 = iVar1 < iVar6;
    break;
  case 3:
    bVar3 = iVar6 < iVar1;
    break;
  case 4:
    bVar3 = iVar6 == iVar1;
    break;
  default:
    local_48.klass = (System_Enum_c *)MOLNCMOLNHF_TypeInfo;
    local_48.monitor = (void *)0xffffffffffffffff;
    local_38 = iVar2;
    pSVar5 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
                    /* try { // try from 03441980 to 035419a7 has its CatchHandler @ 034419bc */
    pSVar5 = System_String__Concat(StringLiteral_6351,pSVar5,(MethodInfo *)0x0);
    if ((UnityEngine_Debug_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 034419a8 to 035419b3 has its CatchHandler @ 03441690 */
      thunk_FUN_01ba7564(UnityEngine_Debug_TypeInfo);
    }
                    /* try { // try from 034419b4 to 035419bb has its CatchHandler @ 034419bc */
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
    bVar3 = true;
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03441980 with catch @ 034419bc
                       catch(type#2 @ 00000000) { ... } // from try @ 034419b4 with catch @ 034419bc
                        */
  }
  return bVar3;
}

