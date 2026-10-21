// TypeDefIndex 283
// Namespace: 
// public sealed class GCOLFANNEMF : KFHIPIPCOHK
// Fields:
//   private readonly List<BECIPDJBAOG> FCKCGNHILFE; // 0x18
//   private readonly int ANILPHJPHND; // 0x20

// ===== private static void KDKHMJLKOCP(bool CNNDAOBFDAC)  [RVA 0x323481C]
// GCOLFANNEMF$$KDKHMJLKOCP @ RVA 0x323481C

void GCOLFANNEMF__KDKHMJLKOCP(bool CNNDAOBFDAC,MethodInfo *method)

{
  Roster_o *pAVar1;
  MethodInfo *extraout_x1;
  MethodInfo *extraout_x1_00;
  MethodInfo *extraout_x1_01;
  
  if ((DAT_04567011 & 1) == 0) {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    FUN_01bab630(&StringLiteral_10936/*"RaidPacksPurchaseFailed"*/);
                    /* try { // try from 03334854 to 0343487b has its CatchHandler @ 03334a40 */
    DAT_04567011 = 1;
    method = extraout_x1;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
    method = extraout_x1_00;
  }
  if (DAT_04565b7d == '\0') {
    FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
    DAT_04565b7d = '\x01';
    method = extraout_x1_01;
  }
  if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(NLPJLHOEAOE_TypeInfo,method);
  }
  pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
  if (pAVar1 != (Roster_o *)0x0) {
                    /* try { // try from 033348b0 to 034348db has its CatchHandler @ 03334a3c */
    Roster__HEMDIAFAMAO(pAVar1,StringLiteral_10936/*"RaidPacksPurchaseFailed"*/,CNNDAOBFDAC,0,(MethodInfo *)0x0);
    if (DAT_04565b7d == '\0') {
      FUN_01bab630(&NLPJLHOEAOE_TypeInfo);
      DAT_04565b7d = '\x01';
    }
    if ((NLPJLHOEAOE_TypeInfo->_2).cctor_finished == 0) {
      thunk_FUN_01ba7564();
    }
    pAVar1 = NLPJLHOEAOE_TypeInfo->static_fields->_EDIEPEOIMDF_k__BackingField;
    if (pAVar1 != (Roster_o *)0x0) {
      CIOBNDOOGIM__BHFGGAKKJKP((CIOBNDOOGIM_o *)pAVar1,CNNDAOBFDAC,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 03334918 to 0343491f has its CatchHandler @ 03334a34 */
  FUN_01bab8c8();
}


// ===== public void .ctor(int FMHAMFNJHDI, List<BECIPDJBAOG> KJADEEFANAL)  [RVA 0x323491C]
// GCOLFANNEMF$$.ctor @ RVA 0x323491C

void GCOLFANNEMF___ctor(GCOLFANNEMF_o *__this,int32_t FMHAMFNJHDI,
                       System_Collections_Generic_List_BECIPDJBAOG__o *KJADEEFANAL,
                       MethodInfo *method)

{
  System_Collections_Generic_List_BECIPDJBAOG__o **ppSVar1;
  
                    /* try { // try from 03334924 to 0343492f has its CatchHandler @ 03334a38 */
  KFHIPIPCOHK___ctor((KFHIPIPCOHK_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields).FCKCGNHILFE;
  *ppSVar1 = KJADEEFANAL;
                    /* try { // try from 0333493c to 03434943 has its CatchHandler @ 03334a24 */
  (__this->fields).ANILPHJPHND = FMHAMFNJHDI;
                    /* try { // try from 03334948 to 03434953 has its CatchHandler @ 03334a28 */
  thunk_FUN_01c20e04(ppSVar1,KJADEEFANAL);
  return;
}


// ===== protected override void HJKJNLIKHMM()  [RVA 0x3234954]
// GCOLFANNEMF$$HJKJNLIKHMM @ RVA 0x3234954

void GCOLFANNEMF__HJKJNLIKHMM(GCOLFANNEMF_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  MethodInfo *extraout_x1;
  System_Collections_Generic_List_BECIPDJBAOG__o *pSVar4;
  
                    /* try { // try from 03334954 to 034349f7 has its CatchHandler @ 03334788 */
  if ((DAT_04567012 & 1) == 0) {
    FUN_01bab630(&Method_KFHIPIPCOHK_KJKDAHGENPM<IKGPGAPFKNE>__);
    FUN_01bab630(&Method_KFHIPIPCOHK_KJKDAHGENPM<MCLOEMMHNIA>__);
    FUN_01bab630(&Method_System_Collections_Generic_List<BECIPDJBAOG>_get_Count__);
    DAT_04567012 = 1;
    method = extraout_x1;
  }
  pSVar4 = (__this->fields).FCKCGNHILFE;
  if (pSVar4 != (System_Collections_Generic_List_BECIPDJBAOG__o *)0x0) {
    iVar2 = (pSVar4->fields)._size;
    iVar3 = (__this->fields).ANILPHJPHND;
    puVar1 = (undefined8 *)&Method_KFHIPIPCOHK_KJKDAHGENPM<IKGPGAPFKNE>__;
    if (iVar3 <= iVar2) {
      puVar1 = &Method_KFHIPIPCOHK_KJKDAHGENPM<MCLOEMMHNIA>__;
    }
    GCOLFANNEMF__KDKHMJLKOCP(iVar2 < iVar3,method);
    KFHIPIPCOHK__KJKDAHGENPM<object>((KFHIPIPCOHK_o *)__this,(MethodInfo_1EE18C8 *)*puVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

