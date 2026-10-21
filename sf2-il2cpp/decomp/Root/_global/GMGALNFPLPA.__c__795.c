// TypeDefIndex 795
// Namespace: 
// [Serializable]
// private sealed class GMGALNFPLPA.<>c
// Fields:
//   public static readonly GMGALNFPLPA.<>c <>9; // 0x0
//   public static Action<GMGALNFPLPA> <>9__59_0; // 0x8

// ===== public void .ctor()  [RVA 0x306E440]
// GMGALNFPLPA.<>c$$.ctor @ RVA 0x306E440

void GMGALNFPLPA_<>c___ctor(GMGALNFPLPA___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ===== private static void .cctor()  [RVA 0x306E448]
// GMGALNFPLPA.<>c$$.cctor @ RVA 0x306E448

void GMGALNFPLPA_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if ((DAT_04565f4a & 1) == 0) {
    FUN_01bab630(&GMGALNFPLPA_<>c_TypeInfo);
    DAT_04565f4a = 1;
  }
  __this = (Il2CppObject *)thunk_FUN_01bda818(GMGALNFPLPA_<>c_TypeInfo);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  GMGALNFPLPA_<>c_TypeInfo->static_fields->__9 = (GMGALNFPLPA___c_o *)__this;
  thunk_FUN_01c20e04(GMGALNFPLPA_<>c_TypeInfo->static_fields,__this);
  return;
}


// ===== internal void CLOGMAPBOCG(GMGALNFPLPA child)  [RVA 0x306E4B0]
// GMGALNFPLPA.<>c$$CLOGMAPBOCG @ RVA 0x306E4B0

void GMGALNFPLPA_<>c__CLOGMAPBOCG(GMGALNFPLPA___c_o *__this,GMGALNFPLPA_o *child,MethodInfo *method)

{
  if (child != (GMGALNFPLPA_o *)0x0) {
    (child->fields).BDDKEKCPADJ = 0.0;
    (child->fields).HFLMCCMEBNP = 0.0;
    (child->fields).DJIFHDOPPPE = false;
    GMGALNFPLPA__NOKHGKKMCHA(child,true,method);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

