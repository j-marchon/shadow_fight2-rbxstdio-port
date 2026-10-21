// TypeDefIndex 1324
// Namespace: 
// public class OHAKJHMJAKL : CABNDLLKIEL
// Fields:
//   private string <COIPKAKHDFP>k__BackingField; // 0x10
//   private string <AJBLFMPFEIO>k__BackingField; // 0x18

// ===== public void HCOCAAIGNNL(string CJNHFNHJHPE)  [RVA 0x315C328]
// OHAKJHMJAKL$$HCOCAAIGNNL @ RVA 0x315C328

void OHAKJHMJAKL__HCOCAAIGNNL(OHAKJHMJAKL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._COIPKAKHDFP_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public string KCHJCGEMCGE()  [RVA 0x315C330]
// OHAKJHMJAKL$$KCHJCGEMCGE @ RVA 0x315C330

System_String_o * OHAKJHMJAKL__KCHJCGEMCGE(OHAKJHMJAKL_o *__this,MethodInfo *method)

{
  return (__this->fields)._COIPKAKHDFP_k__BackingField;
}


// ===== public void PKPLAKAMOPO(string CJNHFNHJHPE)  [RVA 0x315C338]
// OHAKJHMJAKL$$PKPLAKAMOPO @ RVA 0x315C338

void OHAKJHMJAKL__PKPLAKAMOPO(OHAKJHMJAKL_o *__this,System_String_o *CJNHFNHJHPE,MethodInfo *method)

{
  (__this->fields)._AJBLFMPFEIO_k__BackingField = CJNHFNHJHPE;
  thunk_FUN_01c20e04();
  return;
}


// ===== public override string ToString()  [RVA 0x315C340]
// OHAKJHMJAKL$$ToString @ RVA 0x315C340

System_String_o * OHAKJHMJAKL__ToString(OHAKJHMJAKL_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((DAT_0456686b & 1) == 0) {
    FUN_01bab630(&StringLiteral_255/*" : "*/);
    DAT_0456686b = 1;
  }
  pSVar1 = System_String__Concat
                     ((__this->fields)._COIPKAKHDFP_k__BackingField,StringLiteral_255/*" : "*/,
                      (__this->fields)._AJBLFMPFEIO_k__BackingField,(MethodInfo *)0x0);
  return pSVar1;
}


// ===== public void .ctor()  [RVA 0x315C38C]
// OHAKJHMJAKL$$.ctor @ RVA 0x315C38C

void OHAKJHMJAKL___ctor(OHAKJHMJAKL_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== public string CNKOOLDMAGC()  [RVA 0x315C394]
// OHAKJHMJAKL$$CNKOOLDMAGC @ RVA 0x315C394

System_String_o * OHAKJHMJAKL__CNKOOLDMAGC(OHAKJHMJAKL_o *__this,MethodInfo *method)

{
  return (__this->fields)._AJBLFMPFEIO_k__BackingField;
}

