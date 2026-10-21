// TypeDefIndex 3073
// Namespace: 
// public class GDCFAOAEIMA
// Fields:
//   public string IOHKOCPFNHE; // 0x10
//   public string MKMLGPGLMJC; // 0x18
//   public string ODBPPOHIHPH; // 0x20

// ===== public bool PFLEIMCKGPE(string FEPLAGOGJNL, string GNLGLGHFLDD)  [RVA 0x34C54C8]
// GDCFAOAEIMA$$PFLEIMCKGPE @ RVA 0x34C54C8

bool GDCFAOAEIMA__PFLEIMCKGPE
               (GDCFAOAEIMA_o *__this,System_String_o *FEPLAGOGJNL,System_String_o *GNLGLGHFLDD,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  System_String_o *__this_00;
  
  if ((DAT_04568631 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_RaidBetaLogger_TypeInfo);
    DAT_04568631 = 1;
  }
  if ((Nekki_Utils_RaidBetaLogger_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  __this_00 = Nekki_Utils_RaidBetaLogger__GetExceptionName(FEPLAGOGJNL,(MethodInfo *)0x0);
  bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).IOHKOCPFNHE,(MethodInfo *)0x0);
  if (((bVar1) &&
      (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).MKMLGPGLMJC,(MethodInfo *)0x0), bVar1)) &&
     (bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).ODBPPOHIHPH,(MethodInfo *)0x0), bVar1)) {
    bVar1 = false;
  }
  else {
    bVar1 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).IOHKOCPFNHE,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = true;
    }
    else {
      if (__this_00 == (System_String_o *)0x0) goto LAB_035c561c;
      bVar1 = System_String__Contains(__this_00,(__this->fields).IOHKOCPFNHE,5,(MethodInfo *)0x0);
    }
    bVar2 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).MKMLGPGLMJC,(MethodInfo *)0x0);
    if (bVar2) {
      bVar2 = true;
    }
    else {
      if (GNLGLGHFLDD == (System_String_o *)0x0) goto LAB_035c561c;
      bVar2 = System_String__Contains(GNLGLGHFLDD,(__this->fields).MKMLGPGLMJC,5,(MethodInfo *)0x0);
    }
    bVar3 = PCOEHCPGBBG__BDLEIEHBFAD((__this->fields).ODBPPOHIHPH,(MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = true;
    }
    else {
      if (FEPLAGOGJNL == (System_String_o *)0x0) {
LAB_035c561c:
                    /* WARNING: Subroutine does not return */
        FUN_01bab8c8();
      }
      bVar3 = System_String__Contains(FEPLAGOGJNL,(__this->fields).ODBPPOHIHPH,5,(MethodInfo *)0x0);
    }
    bVar1 = (bVar2 & bVar1 & bVar3) != 0;
  }
  return bVar1;
}


// ===== public void .ctor()  [RVA 0x34C5620]
// GDCFAOAEIMA$$.ctor @ RVA 0x34C5620

void GDCFAOAEIMA___ctor(GDCFAOAEIMA_o *__this,MethodInfo *method)

{
  if ((DAT_04568632 & 1) == 0) {
    FUN_01bab630(&StringLiteral_1/*""*/);
    DAT_04568632 = 1;
  }
  (__this->fields).IOHKOCPFNHE = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).MKMLGPGLMJC = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  (__this->fields).ODBPPOHIHPH = StringLiteral_1/*""*/;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

