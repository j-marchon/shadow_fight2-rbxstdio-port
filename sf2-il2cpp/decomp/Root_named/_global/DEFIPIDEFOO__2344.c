// TypeDefIndex 2344
// Namespace: 
// public class DEFIPIDEFOO
// Fields:
//   public int IGLHCNLNIPK; // 0x10
//   public string JMGIACHBIKG; // 0x18
//   public string JIJLBFGKNJK; // 0x20

// ===== public void .ctor(int OGPGLGPMEPD, string JCLPIKHEKBB, string KGLJICLJHEL)  [RVA 0x3322DF4]
// DEFIPIDEFOO$$.ctor @ RVA 0x3322DF4

void DEFIPIDEFOO___ctor(DEFIPIDEFOO_o *__this,int32_t OGPGLGPMEPD,System_String_o *JCLPIKHEKBB,
                       System_String_o *KGLJICLJHEL,MethodInfo *method)

{
  System_String_o **ppSVar1;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).IGLHCNLNIPK = OGPGLGPMEPD;
  ppSVar1 = &(__this->fields).JMGIACHBIKG;
  *ppSVar1 = JCLPIKHEKBB;
  thunk_FUN_01c20e04(ppSVar1,JCLPIKHEKBB);
  ppSVar1 = &(__this->fields).JIJLBFGKNJK;
  *ppSVar1 = KGLJICLJHEL;
  thunk_FUN_01c20e04(ppSVar1,KGLJICLJHEL);
  return;
}

