// TypeDefIndex 3203
// Namespace: 
// [LKLNALMFJEB("GoogleUmpConsentConfig.json", 1, True)]
// public class KDKLBPLOHJL : PPPLAFICHMF
// Fields:
//   private bool <GHHFLFGIKHA>k__BackingField; // 0x10
//   private OMOGNOHGLGJ <PBNOOCEGFCF>k__BackingField; // 0x14
//   private IEnumerable<string> <HLDLEFHAHCE>k__BackingField; // 0x18

// ===== public OMOGNOHGLGJ FPJMPFJEIJF()  [RVA 0x34FA62C]
// KDKLBPLOHJL$$FPJMPFJEIJF @ RVA 0x34FA62C

int32_t KDKLBPLOHJL__FPJMPFJEIJF(KDKLBPLOHJL_o *__this,MethodInfo *method)

{
  return (__this->fields)._PBNOOCEGFCF_k__BackingField;
}


// ===== public void LGGGEMPNGKJ(OMOGNOHGLGJ value)  [RVA 0x34FA634]
// KDKLBPLOHJL$$LGGGEMPNGKJ @ RVA 0x34FA634

void KDKLBPLOHJL__LGGGEMPNGKJ(KDKLBPLOHJL_o *__this,int32_t value,MethodInfo *method)

{
  (__this->fields)._PBNOOCEGFCF_k__BackingField = value;
  return;
}


// ===== public void DLMJADIDEMM(bool value)  [RVA 0x34FA63C]
// KDKLBPLOHJL$$DLMJADIDEMM @ RVA 0x34FA63C

void KDKLBPLOHJL__DLMJADIDEMM(KDKLBPLOHJL_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._GHHFLFGIKHA_k__BackingField = value;
  return;
}


// ===== public void .ctor()  [RVA 0x34FA648]
// KDKLBPLOHJL$$.ctor @ RVA 0x34FA648

void KDKLBPLOHJL___ctor(KDKLBPLOHJL_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_IEnumerable_string__o **ppSVar1;
  MethodInfo *extraout_x1;
  
  if ((DAT_0456881a & 1) == 0) {
    FUN_01bab630(&Method_System_Collections_Generic_List<string>__ctor__);
    FUN_01bab630(&System_Collections_Generic_List<string>_TypeInfo);
    DAT_0456881a = 1;
    method = extraout_x1;
  }
  __this_00 = (System_Collections_Generic_List_object__o *)
              thunk_FUN_01bda818(System_Collections_Generic_List<string>_TypeInfo,method);
  System_Collections_Generic_List<object>___ctor
            (__this_00,Method_System_Collections_Generic_List<string>__ctor__);
  ppSVar1 = &(__this->fields)._HLDLEFHAHCE_k__BackingField;
  *ppSVar1 = (System_Collections_Generic_IEnumerable_string__o *)__this_00;
  thunk_FUN_01c20e04(ppSVar1,__this_00);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public bool CAEONBMKKHB()  [RVA 0x34FA6D0]
// KDKLBPLOHJL$$CAEONBMKKHB @ RVA 0x34FA6D0

bool KDKLBPLOHJL__CAEONBMKKHB(KDKLBPLOHJL_o *__this,MethodInfo *method)

{
  return (__this->fields)._GHHFLFGIKHA_k__BackingField;
}


// ===== public IEnumerable<string> NJOKBCJKDIB()  [RVA 0x34FA6D8]
// KDKLBPLOHJL$$NJOKBCJKDIB @ RVA 0x34FA6D8

System_Collections_Generic_IEnumerable_string__o *
KDKLBPLOHJL__NJOKBCJKDIB(KDKLBPLOHJL_o *__this,MethodInfo *method)

{
  return (__this->fields)._HLDLEFHAHCE_k__BackingField;
}


// ===== public void NOGIEANBDED(IEnumerable<string> value)  [RVA 0x34FA6E0]
// KDKLBPLOHJL$$NOGIEANBDED @ RVA 0x34FA6E0

void KDKLBPLOHJL__NOGIEANBDED
               (KDKLBPLOHJL_o *__this,System_Collections_Generic_IEnumerable_string__o *value,
               MethodInfo *method)

{
  (__this->fields)._HLDLEFHAHCE_k__BackingField = value;
  thunk_FUN_01c20e04();
  return;
}

