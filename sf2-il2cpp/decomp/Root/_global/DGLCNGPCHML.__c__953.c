// TypeDefIndex 953
// Namespace: 
// [Serializable]
// private sealed class DGLCNGPCHML.<>c
// Fields:
//   public static readonly DGLCNGPCHML.<>c <>9; // 0x0
//   public static Func<XmlNode, bool> <>9__0_0; // 0x8

// ===== private static void .cctor()  [RVA 0x30ACC84]
// DGLCNGPCHML.<>c$$.cctor @ RVA 0x30ACC84

void DGLCNGPCHML_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_045661b0 & 1) == 0) {
    FUN_01bab630(&DGLCNGPCHML_<>c_TypeInfo);
    DAT_045661b0 = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(DGLCNGPCHML_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  DGLCNGPCHML_<>c_TypeInfo->static_fields->__9 = (DGLCNGPCHML___c_o *)__this;
  thunk_FUN_01c20e04(DGLCNGPCHML_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal bool NDKGAMBJAKG(XmlNode x)  [RVA 0x30ACCF4]
// DGLCNGPCHML.<>c$$NDKGAMBJAKG @ RVA 0x30ACCF4

bool DGLCNGPCHML_<>c__NDKGAMBJAKG
               (DGLCNGPCHML___c_o *__this,System_Xml_XmlNode_o *x,MethodInfo *method)

{
  int iVar1;
  
  if (x != (System_Xml_XmlNode_o *)0x0) {
    iVar1 = (*(x->klass->vtable)._11_unknown.methodPtr)(x,(x->klass->vtable)._11_unknown.method);
    return iVar1 == 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}


// ===== public void .ctor()  [RVA 0x30ACCEC]
// DGLCNGPCHML.<>c$$.ctor @ RVA 0x30ACCEC

void DGLCNGPCHML_<>c___ctor(DGLCNGPCHML___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

