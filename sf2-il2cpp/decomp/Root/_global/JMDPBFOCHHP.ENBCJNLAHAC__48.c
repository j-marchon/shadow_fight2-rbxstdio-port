// TypeDefIndex 48
// Namespace: 
// public class JMDPBFOCHHP.ENBCJNLAHAC
// Fields:
//   public string JIJLBFGKNJK; // 0x10
//   public string JMGIACHBIKG; // 0x18
//   public string KPDPJONADPJ; // 0x20
//   public string IEAEDGLMPPK; // 0x28
//   public string LEJBNEIJJIF; // 0x30
//   public int NGMFKGGBHND; // 0x38
//   public int BNGEEMBIFJH; // 0x3C
//   public int MLBCPAGCKAH; // 0x40
//   public int FKHFKAJHLOG; // 0x44
//   public bool AIEJIFADLHH; // 0x48
//   public bool PCDOKDMDNMB; // 0x49
//   public bool CBKACDJHFNE; // 0x4A
//   public Vector2 MJPMEGEPHCK; // 0x4C
//   public string ICECFDIHPHN; // 0x58
//   public string EGMPFEOGKOF; // 0x60
//   public string DFHEHPGHMLF; // 0x68
//   public string DPNFGBFFNAJ; // 0x70
//   public int JIALOHAOPAO; // 0x78
//   public string BPCADJLKKGA; // 0x80
//   public string IEOMJEPNIBB; // 0x88
//   public string KIDAPFADKEE; // 0x90
//   public long NFKHJPMMNLM; // 0x98
//   public long CEGNAMELGID; // 0xA0
//   public List<MGNDHCBAPEN<string, int>> LIJCIBIOOOH; // 0xA8
//   public bool NIHFMGMHLBN; // 0xB0
//   public DPLBMJODBEK KMKNJMEDEAH; // 0xB4
//   public bool CBCJKNHJFJL; // 0xB8
//   public bool MOBGHJBCHFF; // 0xB9
//   public string FPMPKOCHBEB; // 0xC0
//   public string APCNIPADHAO; // 0xC8
//   public JOCNCPCOEAC JHFAAGIPDAJ; // 0xD0
//   public IGNEHHMICKB BDDFFNDBGHC; // 0xD8
//   public string BGHFADDGPAD; // 0xE0
//   public string IIHFLLPKBJI; // 0xE8
//   public string PNGPGDCGOKD; // 0xF0
//   public string KAOKFFDMLGK; // 0xF8

// ===== public override string ToString()  [RVA 0x2FFB0E4]
// JMDPBFOCHHP.ENBCJNLAHAC$$ToString @ RVA 0x2FFB0E4

System_String_o *
JMDPBFOCHHP_ENBCJNLAHAC__ToString(JMDPBFOCHHP_ENBCJNLAHAC_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_04565acf & 1) == 0) {
    FUN_01bab630(&StringLiteral_19791/*"name={0} container={1}"*/);
    DAT_04565acf = 1;
  }
  pSVar1 = System_String__Format
                     (StringLiteral_19791/*"name={0} container={1}"*/,(Il2CppObject *)(__this->fields).JIJLBFGKNJK,
                      (Il2CppObject *)(__this->fields).LEJBNEIJJIF,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x2FFB134]
// JMDPBFOCHHP.ENBCJNLAHAC$$.ctor @ RVA 0x2FFB134

void JMDPBFOCHHP_ENBCJNLAHAC___ctor(JMDPBFOCHHP_ENBCJNLAHAC_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *__this_00;
  System_Collections_Generic_List_MGNDHCBAPEN_string__int___o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_04565ad0 & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_TypeInfo);
    FUN_01bab630(&string_TypeInfo);
    FUN_01bab630(&StringLiteral_22465/*"{255,255,255}"*/);
    DAT_04565ad0 = 1;
    method = extraout_x1;
  }
  if (DAT_0455fa75 == '\0') {
    FUN_01bab630(&UnityEngine_Vector2_TypeInfo,method);
    DAT_0455fa75 = '\x01';
  }
  (__this->fields).MJPMEGEPHCK.fields =
       (UnityEngine_Vector2_TypeInfo->static_fields->zeroVector).fields;
  (__this->fields).ICECFDIHPHN = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).DPNFGBFFNAJ = StringLiteral_22465/*"{255,255,255}"*/;
  thunk_FUN_01c20e04();
  __this_00 = (System_Collections_Generic_List_MGNDHCBAPEN_string__int___o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>_TypeInfo)
  ;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             Method_System_Collections_Generic_List<MGNDHCBAPEN<string,_int>>__ctor__);
  ppSVar1 = &(__this->fields).LIJCIBIOOOH;
  *ppSVar1 = __this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  (__this->fields).FPMPKOCHBEB = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  (__this->fields).APCNIPADHAO = string_TypeInfo->static_fields->Empty;
  thunk_FUN_01c20e04();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

