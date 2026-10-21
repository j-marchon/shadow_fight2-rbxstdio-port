// TypeDefIndex 1846
// Namespace: 
// public class AHGCKHNOFNG : NPMKPCLPFKB
// Fields:
//   private int <CNAECKJLKEA>k__BackingField; // 0x10
//   private string <GMJBGDHEAEN>k__BackingField; // 0x18

// ===== public int LLDAMCCJIKG()  [RVA 0x324358C]
// AHGCKHNOFNG$$LLDAMCCJIKG @ RVA 0x324358C

int32_t AHGCKHNOFNG__LLDAMCCJIKG(AHGCKHNOFNG_o *__this,MethodInfo *method)

{
  return (__this->fields)._CNAECKJLKEA_k__BackingField;
}


// ===== public string JKNIGLALGCM()  [RVA 0x3243594]
// AHGCKHNOFNG$$JKNIGLALGCM @ RVA 0x3243594

System_String_o * AHGCKHNOFNG__JKNIGLALGCM(AHGCKHNOFNG_o *__this,MethodInfo *method)

{
  return (__this->fields)._GMJBGDHEAEN_k__BackingField;
}


// ===== private void HLKPJIBHHKB(int CJNHFNHJHPE)  [RVA 0x324359C]
// AHGCKHNOFNG$$HLKPJIBHHKB @ RVA 0x324359C

void AHGCKHNOFNG__HLKPJIBHHKB(AHGCKHNOFNG_o *__this,int32_t CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._CNAECKJLKEA_k__BackingField = CJNHFNHJHPE;
  return;
}


// ===== public void .ctor(int BMBCPGEOCCJ, string CELOLGNMKCG)  [RVA 0x32435A4]
// AHGCKHNOFNG$$.ctor @ RVA 0x32435A4

void AHGCKHNOFNG___ctor(AHGCKHNOFNG_o *__this,int32_t BMBCPGEOCCJ,System_String_o *CELOLGNMKCG,
                       MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  NPMKPCLPFKB___ctor((NPMKPCLPFKB_o *)__this,(MethodInfo *)0x0);
  ppSVar1 = &(__this->fields)._GMJBGDHEAEN_k__BackingField;
  *ppSVar1 = CELOLGNMKCG;
  (__this->fields)._CNAECKJLKEA_k__BackingField = BMBCPGEOCCJ;
  thunk_FUN_01c20e04(ppSVar1,CELOLGNMKCG);
  return;
}


// ===== private void EBICEGCGNDO(string CJNHFNHJHPE)  [RVA 0x32435DC]
// AHGCKHNOFNG$$EBICEGCGNDO @ RVA 0x32435DC

void AHGCKHNOFNG__EBICEGCGNDO(AHGCKHNOFNG_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._GMJBGDHEAEN_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}

