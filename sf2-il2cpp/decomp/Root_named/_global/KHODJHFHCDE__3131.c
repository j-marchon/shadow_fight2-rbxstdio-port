// TypeDefIndex 3131
// Namespace: 
// public class KHODJHFHCDE
// Fields:
//   private bool <NJFBLJHECFH>k__BackingField; // 0x10
//   private IReadOnlyList<PackSettings> <JOFOHDAGJIN>k__BackingField; // 0x18

// ===== private void IAEFJOBHHOE(IReadOnlyList<PackSettings> CJNHFNHJHPE)  [RVA 0x34D2A00]
// KHODJHFHCDE$$IAEFJOBHHOE @ RVA 0x34D2A00

void KHODJHFHCDE__IAEFJOBHHOE
               (KHODJHFHCDE_o *__this,
               System_Collections_Generic_IReadOnlyList_PackSettings__o *CJNHFNHJHPE,
               MethodInfo *method)

{
  (__this->fields)._JOFOHDAGJIN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public IReadOnlyList<PackSettings> GACHMMDHOJE()  [RVA 0x34D2A08]
// KHODJHFHCDE$$GACHMMDHOJE @ RVA 0x34D2A08

System_Collections_Generic_IReadOnlyList_PackSettings__o *
KHODJHFHCDE__GACHMMDHOJE(KHODJHFHCDE_o *__this,MethodInfo *method)

{
  return (__this->fields)._JOFOHDAGJIN_k__BackingField;
}


// ===== public void .ctor(bool IBEBJHMKFGE, IReadOnlyList<PackSettings> KOMNGPDDOFN)  [RVA 0x34D2A10]
// KHODJHFHCDE$$.ctor @ RVA 0x34D2A10

void KHODJHFHCDE___ctor(KHODJHFHCDE_o *__this,bool IBEBJHMKFGE,
                       System_Collections_Generic_IReadOnlyList_PackSettings__o *KOMNGPDDOFN,
                       MethodInfo *method)

{
  System_Collections_Generic_IReadOnlyList_PackSettings__o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._JOFOHDAGJIN_k__BackingField;
  *ppSVar1 = KOMNGPDDOFN;
  (__this->fields)._NJFBLJHECFH_k__BackingField = IBEBJHMKFGE;
  thunk_FUN_01c20e04(ppSVar1,KOMNGPDDOFN);
  return;
}


// ===== private void KKOEKLGLDGC(bool CJNHFNHJHPE)  [RVA 0x34D2A4C]
// KHODJHFHCDE$$KKOEKLGLDGC @ RVA 0x34D2A4C

void KHODJHFHCDE__KKOEKLGLDGC(KHODJHFHCDE_o *__this,bool CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._NJFBLJHECFH_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public bool BOJJBGPIKDP()  [RVA 0x34D2A58]
// KHODJHFHCDE$$BOJJBGPIKDP @ RVA 0x34D2A58

bool KHODJHFHCDE__BOJJBGPIKDP(KHODJHFHCDE_o *__this,MethodInfo *method)

{
  return (__this->fields)._NJFBLJHECFH_k__BackingField;
}

