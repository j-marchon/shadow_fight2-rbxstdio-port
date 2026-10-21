// Nekki.SF2.GUI.Fight.ComboItem$$GNHDDILGIDD @ RVA 0x34B32B8

System_String_o *
Nekki_SF2_GUI_Fight_ComboItem__GNHDDILGIDD
          (Nekki_SF2_GUI_Fight_ComboItem_o *__this,int32_t ACCIHBHMFPN,MethodInfo *method)

{
  undefined8 *puVar1;
  
  if ((DAT_0456856c & 1) == 0) {
    FUN_01bab630(&StringLiteral_6363);
    FUN_01bab630(&StringLiteral_6375);
    FUN_01bab630(&StringLiteral_6361);
    FUN_01bab630(&StringLiteral_1);
    FUN_01bab630(&StringLiteral_6371);
    FUN_01bab630(&StringLiteral_6362);
    FUN_01bab630(&StringLiteral_6360);
    DAT_0456856c = 1;
  }
  if ((uint)ACCIHBHMFPN < 6) {
    puVar1 = (undefined8 *)(&PTR_StringLiteral_6362_03fc6888)[ACCIHBHMFPN];
  }
  else {
    puVar1 = &StringLiteral_1;
  }
  return (System_String_o *)*puVar1;
}

