// Nekki.SF2.GUI.Map.MapContainer$$ENIBALHEJFA @ RVA 0x323A0A8

bool Nekki_SF2_GUI_Map_MapContainer__ENIBALHEJFA
               (System_String_o *KGLJICLJHEL,OOMHDDBCBJP_o *BANHBMINMMP,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  byte bVar4;
  
  if (BANHBMINMMP != (OOMHDDBCBJP_o *)0x0) {
    bVar1 = System_String__op_Equality
                      (KGLJICLJHEL,(BANHBMINMMP->fields).DEKCPPOJFEH,(MethodInfo *)0x0);
    iVar3 = (*(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.methodPtr)
                      (BANHBMINMMP,(BANHBMINMMP->klass->vtable)._15_AAHLCCCONKI.method);
    if (iVar3 == 2) {
      bVar2 = OOMHDDBCBJP__KFMAFEPOEIB(BANHBMINMMP,(MethodInfo *)0x0);
      bVar4 = ~bVar2 & 1;
    }
    else {
      bVar4 = 0;
    }
    return (bVar1 & bVar4) != 0;
  }
  return false;
}

