// TypeDefIndex 3341
// Namespace: Nekki.Utils
// public class DetailedLog : MonoBehaviour
// Fields:
//   private const bool ENJBLALFGLH = False;
//   private string[] EDGMFOGIKBP; // 0x20
//   private FPNPHJJPLKB <OHKFCDKHGJO>k__BackingField; // 0x28
//   private static DetailedLog CBDMFFMCJBK; // 0x0

// ===== public FPNPHJJPLKB get__DetailedLogTactics()  [RVA 0x352EEF4]
// Nekki.Utils.DetailedLog$$get__DetailedLogTactics @ RVA 0x352EEF4

FPNPHJJPLKB_o *
Nekki_Utils_DetailedLog__get__DetailedLogTactics
          (Nekki_Utils_DetailedLog_o *__this,MethodInfo *method)

{
  return (__this->fields)._OHKFCDKHGJO_k__BackingField;
}


// ===== public static void Log(string DIHAKADKIKM, DetailedLog.GFMLMFADEGC[] BBBLOLJAMJP)  [RVA 0x352EEFC]
// Nekki.Utils.DetailedLog$$Log @ RVA 0x352EEFC

void Nekki_Utils_DetailedLog__Log
               (System_String_o *DIHAKADKIKM,Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP,
               MethodInfo *method)

{
  return;
}


// ===== public static void Error(string DIHAKADKIKM, DetailedLog.GFMLMFADEGC[] BBBLOLJAMJP)  [RVA 0x352EF00]
// Nekki.Utils.DetailedLog$$Error @ RVA 0x352EF00

void Nekki_Utils_DetailedLog__Error
               (System_String_o *DIHAKADKIKM,Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP,
               MethodInfo *method)

{
  return;
}


// ===== public static void Warning(string DIHAKADKIKM, DetailedLog.GFMLMFADEGC[] BBBLOLJAMJP)  [RVA 0x352EF04]
// Nekki.Utils.DetailedLog$$Warning @ RVA 0x352EF04

void Nekki_Utils_DetailedLog__Warning
               (System_String_o *DIHAKADKIKM,Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP,
               MethodInfo *method)

{
  return;
}


// ===== private void HNKJOKHNDMA(FPNPHJJPLKB CJNHFNHJHPE)  [RVA 0x352EF08]
// Nekki.Utils.DetailedLog$$HNKJOKHNDMA @ RVA 0x352EF08

void Nekki_Utils_DetailedLog__HNKJOKHNDMA
               (Nekki_Utils_DetailedLog_o *__this,FPNPHJJPLKB_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._OHKFCDKHGJO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public static void LogDebug(string DIHAKADKIKM, DetailedLog.GFMLMFADEGC[] BBBLOLJAMJP)  [RVA 0x352EF10]
// Nekki.Utils.DetailedLog$$LogDebug @ RVA 0x352EF10

void Nekki_Utils_DetailedLog__LogDebug
               (System_String_o *DIHAKADKIKM,Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP,
               MethodInfo *method)

{
  return;
}


// ===== private void GIENGNEGHPJ()  [RVA 0x352EF14]
// Nekki.Utils.DetailedLog$$GIENGNEGHPJ @ RVA 0x352EF14

void Nekki_Utils_DetailedLog__GIENGNEGHPJ(Nekki_Utils_DetailedLog_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *target;
  FPNPHJJPLKB_o *__this_00;
  FPNPHJJPLKB_o **ppFVar1;
  
  if ((DAT_04568a48 & 1) == 0) {
    FUN_01bab630(&FPNPHJJPLKB_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    DAT_04568a48 = 1;
  }
  target = (UnityEngine_Object_o *)
           UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  UnityEngine_Object__DontDestroyOnLoad(target,(MethodInfo *)0x0);
  __this_00 = (FPNPHJJPLKB_o *)thunk_FUN_01bda818(FPNPHJJPLKB_TypeInfo);
  FPNPHJJPLKB___ctor(__this_00,(MethodInfo *)0x0);
  ppFVar1 = &(__this->fields)._OHKFCDKHGJO_k__BackingField;
  *ppFVar1 = __this_00;
  thunk_FUN_01c20e04(ppFVar1,__this_00);
  return;
}


// ===== public static DetailedLog get_Instance()  [RVA 0x352EFB8]
// Nekki.Utils.DetailedLog$$get_Instance @ RVA 0x352EFB8

Nekki_Utils_DetailedLog_o * Nekki_Utils_DetailedLog__get_Instance(MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *__this;
  MethodInfo *method_00;
  Nekki_Utils_DetailedLog_o *pNVar2;
  
  if ((DAT_04568a49 & 1) == 0) {
    FUN_01bab630(&Nekki_Utils_DetailedLog_TypeInfo);
    FUN_01bab630(&Method_UnityEngine_GameObject_AddComponent<DetailedLog>__);
    FUN_01bab630(&UnityEngine_GameObject_TypeInfo);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&StringLiteral_15455/*"[DetailedLog]"*/);
    DAT_04568a49 = 1;
  }
  pNVar2 = Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK;
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
    thunk_FUN_01ba7564();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pNVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = (UnityEngine_GameObject_o *)thunk_FUN_01bda818(UnityEngine_GameObject_TypeInfo);
    UnityEngine_GameObject___ctor(__this,StringLiteral_15455/*"[DetailedLog]"*/,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pNVar2 = (Nekki_Utils_DetailedLog_o *)
               UnityEngine_GameObject__AddComponent<object>
                         (__this,Method_UnityEngine_GameObject_AddComponent<DetailedLog>__);
      Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK = pNVar2;
      thunk_FUN_01c20e04(Nekki_Utils_DetailedLog_TypeInfo->static_fields,pNVar2);
      pNVar2 = Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK;
      if (pNVar2 != (Nekki_Utils_DetailedLog_o *)0x0) {
        Nekki_Utils_DetailedLog__GIENGNEGHPJ(pNVar2,method_00);
        goto LAB_0362f0c0;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
LAB_0362f0c0:
  return Nekki_Utils_DetailedLog_TypeInfo->static_fields->CBDMFFMCJBK;
}


// ===== public static void LogFile(string DIHAKADKIKM, DetailedLog.GFMLMFADEGC[] BBBLOLJAMJP)  [RVA 0x352F0DC]
// Nekki.Utils.DetailedLog$$LogFile @ RVA 0x352F0DC

void Nekki_Utils_DetailedLog__LogFile
               (System_String_o *DIHAKADKIKM,Nekki_Utils_DetailedLog_GFMLMFADEGC_array *BBBLOLJAMJP,
               MethodInfo *method)

{
  return;
}


// ===== public void .ctor()  [RVA 0x352F0E0]
// Nekki.Utils.DetailedLog$$.ctor @ RVA 0x352F0E0

void Nekki_Utils_DetailedLog___ctor(Nekki_Utils_DetailedLog_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}

