// TypeDefIndex 317
// Namespace: 
// [CompilerGenerated]
// private sealed class ZoneScrollItem.GFOAKOGPEAC
// Fields:
//   public ZoneScrollItem <>4__this; // 0x10
//   public OOMHDDBCBJP battle; // 0x18

// ===== internal void GLBBFALLPLL()  [RVA 0x3349534]
// Nekki.SF2.GUI.Map.ZoneScrollItem.GFOAKOGPEAC$$GLBBFALLPLL @ RVA 0x3349534

void Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC__GLBBFALLPLL
               (Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  MethodInfo *method_00;
  Nekki_SF2_GUI_Map_ZoneScrollItem_o *__this_00;
  
  iVar1 = EDFDANKEBGF__EBPFDOEIBEH(1.0,(MethodInfo *)0x0);
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Nekki_SF2_GUI_Map_ZoneScrollItem_o *)0x0) {
    (__this_00->fields).KOGBPIPIKFA = (__this->fields).battle;
    thunk_FUN_01c20e04(&(__this_00->fields).KOGBPIPIKFA);
    Nekki_SF2_GUI_Map_ZoneScrollItem__SelectBattle(__this_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8(iVar1);
}


// ===== public void .ctor()  [RVA 0x3347D64]
// Nekki.SF2.GUI.Map.ZoneScrollItem.GFOAKOGPEAC$$.ctor @ RVA 0x3347D64

void Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC___ctor
               (Nekki_SF2_GUI_Map_ZoneScrollItem_GFOAKOGPEAC_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}

