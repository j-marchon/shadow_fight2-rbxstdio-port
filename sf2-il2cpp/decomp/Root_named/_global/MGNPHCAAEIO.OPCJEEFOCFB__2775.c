// TypeDefIndex 2775
// Namespace: 
// public struct GameUtils.OPCJEEFOCFB
// Fields:
//   public string JIJLBFGKNJK; // 0x0
//   public string KPDPJONADPJ; // 0x8
//   public int ADCKCMDHIHM; // 0x10
//   public string GPOEEHGGIII; // 0x18
//   public bool OAPLLNNEONM; // 0x20

// ===== public void .ctor(HBNENINHPGF OAOLCGAIILM)  [RVA 0x341076C]
// GameUtils.OPCJEEFOCFB$$.ctor @ RVA 0x341076C

void GameUtils_OPCJEEFOCFB___ctor
               (GameUtils_OPCJEEFOCFB_o *__this,HBNENINHPGF_o *OAOLCGAIILM,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
                    /* catch() { ... } // from try @ 03510658 with catch @ 0351076c */
                    /* catch() { ... } // from try @ 03510734 with catch @ 03510770 */
                    /* catch() { ... } // from try @ 03510730 with catch @ 03510774 */
                    /* catch() { ... } // from try @ 03510644 with catch @ 03510778 */
                    /* catch() { ... } // from try @ 03510624 with catch @ 0351077c */
  if ((DAT_0456807f & 1) == 0) {
    FUN_01bab630(&StringLiteral_11073/*"RealMoneyItem"*/);
                    /* try { // try from 03510794 to 03610797 has its CatchHandler @ 035107b8 */
                    /* try { // try from 03510798 to 036107bf has its CatchHandler @ 035104ec */
    DAT_0456807f = 1;
  }
  if (OAOLCGAIILM != (HBNENINHPGF_o *)0x0) {
    (__this->fields).JIJLBFGKNJK = (OAOLCGAIILM->fields)._COIPKAKHDFP_k__BackingField;
    thunk_FUN_01c20e04(__this);
                    /* catch() { ... } // from try @ 03510794 with catch @ 035107b8 */
                    /* try { // try from 035107c0 to 036107c7 has its CatchHandler @ 035107dc */
    (__this->fields).KPDPJONADPJ = (OAOLCGAIILM->fields)._PGCEKJLODEJ_k__BackingField;
    thunk_FUN_01c20e04();
                    /* try { // try from 035107c8 to 036107d3 has its CatchHandler @ 035104ec */
    (__this->fields).ADCKCMDHIHM = 0;
    ppSVar1 = &(__this->fields).GPOEEHGGIII;
    *ppSVar1 = StringLiteral_11073/*"RealMoneyItem"*/;
                    /* try { // try from 035107d4 to 036107db has its CatchHandler @ 035107dc */
    thunk_FUN_01c20e04(ppSVar1);
                    /* catch() { ... } // from try @ 035107c0 with catch @ 035107dc
                       catch() { ... } // from try @ 035107d4 with catch @ 035107dc */
    (__this->fields).OAPLLNNEONM = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(RaidConfig.ENBCJNLAHAC NPOAPJKIIOF)  [RVA 0x34107F0]
// GameUtils.OPCJEEFOCFB$$.ctor @ RVA 0x34107F0

void GameUtils_OPCJEEFOCFB___ctor
               (GameUtils_OPCJEEFOCFB_o *__this,RaidConfig_ENBCJNLAHAC_o *NPOAPJKIIOF,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  if ((DAT_04568080 & 1) == 0) {
    FUN_01bab630(&StringLiteral_10876/*"RaidItemPack"*/);
    DAT_04568080 = 1;
  }
  if (NPOAPJKIIOF != (RaidConfig_ENBCJNLAHAC_o *)0x0) {
    (__this->fields).JIJLBFGKNJK = (NPOAPJKIIOF->fields).JIJLBFGKNJK;
    thunk_FUN_01c20e04(__this);
    (__this->fields).KPDPJONADPJ = (NPOAPJKIIOF->fields).KPDPJONADPJ;
    thunk_FUN_01c20e04();
    (__this->fields).ADCKCMDHIHM = 0;
    ppSVar1 = &(__this->fields).GPOEEHGGIII;
    *ppSVar1 = StringLiteral_10876/*"RaidItemPack"*/;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields).OAPLLNNEONM = true;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor(HOOAAGABMBL IKKAMAMLIKA)  [RVA 0x3410878]
// GameUtils.OPCJEEFOCFB$$.ctor @ RVA 0x3410878

void GameUtils_OPCJEEFOCFB___ctor
               (GameUtils_OPCJEEFOCFB_o *__this,HOOAAGABMBL_o *IKKAMAMLIKA,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o *pSVar2;
  
  if ((DAT_04568081 & 1) == 0) {
    FUN_01bab630(&StringLiteral_4617/*"Consumable"*/);
    DAT_04568081 = 1;
  }
  if (IKKAMAMLIKA != (HOOAAGABMBL_o *)0x0) {
    pSVar2 = (IKKAMAMLIKA->fields)._COIPKAKHDFP_k__BackingField;
    ppSVar1 = &(__this->fields).KPDPJONADPJ;
    *ppSVar1 = pSVar2;
    thunk_FUN_01c20e04(ppSVar1,pSVar2);
    (__this->fields).JIJLBFGKNJK = pSVar2;
    thunk_FUN_01c20e04(__this,pSVar2);
    (__this->fields).ADCKCMDHIHM = 0;
    ppSVar1 = &(__this->fields).GPOEEHGGIII;
    *ppSVar1 = StringLiteral_4617/*"Consumable"*/;
    thunk_FUN_01c20e04(ppSVar1);
    (__this->fields).OAPLLNNEONM = false;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

