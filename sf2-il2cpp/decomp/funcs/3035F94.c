// MPFCDEPCALP$$MAHFCKJGBPP @ RVA 0x3035F94

void MPFCDEPCALP__MAHFCKJGBPP(MPFCDEPCALP_o *__this,PKHMIGFEJCL_o *AAJBIMFNMBB,MethodInfo *method)

{
  bool bVar1;
  long lVar2;
  NDPMLPGANCI_o *__this_00;
  System_Action_DBMPKPJGIPI__o *CJNHFNHJHPE;
  MethodInfo *method_00;
  UnityEngine_Object_o *x;
  
  if ((DAT_04565d41 & 1) == 0) {
    FUN_01bab630(&System_Action<DBMPKPJGIPI>_TypeInfo);
    FUN_01bab630(&Method_MPFCDEPCALP_IOKPGFFEMCE__);
    FUN_01bab630(&UnityEngine_Object_TypeInfo);
    FUN_01bab630(&Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__);
    DAT_04565d41 = 1;
  }
  BOFEMGGNODC__MAHFCKJGBPP((BOFEMGGNODC_o *)__this,AAJBIMFNMBB,(MethodInfo *)0x0);
  lVar2 = *(long *)(Method_Nekki_SF2_GUI_Scene<MapScene>_get_Current__ + 0x20);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
  if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
    lVar2 = FUN_01b81620();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(lVar2 + 0xb8);
  if ((UnityEngine_Object_TypeInfo->_2).cctor_finished == 0) {
                    /* try { // try from 03136048 to 0323618b has its CatchHandler @ 03136048
                       catch() { ... } // from try @ 03136048 with catch @ 03136048
                       catch() { ... } // from try @ 03136570 with catch @ 03136048
                       catch() { ... } // from try @ 03136604 with catch @ 03136048
                       catch() { ... } // from try @ 0313669c with catch @ 03136048
                       catch() { ... } // from try @ 03136810 with catch @ 03136048
                       catch() { ... } // from try @ 03136854 with catch @ 03136048
                       catch() { ... } // from try @ 031368c8 with catch @ 03136048 */
    thunk_FUN_01ba7564(UnityEngine_Object_TypeInfo);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    MPFCDEPCALP__MAHEOMJKNLK(__this,method_00);
    return;
  }
  __this_00 = NDPMLPGANCI__AIHNLLGNBLC((MethodInfo *)0x0);
  CJNHFNHJHPE = (System_Action_DBMPKPJGIPI__o *)
                thunk_FUN_01bda818(System_Action<DBMPKPJGIPI>_TypeInfo);
  System_Action<Int32Enum>___ctor();
  if (__this_00 != (NDPMLPGANCI_o *)0x0) {
    NDPMLPGANCI__IFJFFPAKLKB(__this_00,CJNHFNHJHPE,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

