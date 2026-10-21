// Nekki.SF2.Core.Fights.Renders.Model.MeshRender$$GIENGNEGHPJ @ RVA 0x3197B54

void Nekki_SF2_Core_Fights_Renders_Model_MeshRender__GIENGNEGHPJ
               (Nekki_SF2_Core_Fights_Renders_Model_MeshRender_o *__this,MethodInfo *method)

{
  HHLPEJCDCBH_o *pHVar1;
  UnityEngine_Mesh_o *pUVar2;
  
  pHVar1 = (__this->fields).KMFFEHGLKOC;
  if (pHVar1 != (HHLPEJCDCBH_o *)0x0) {
    HHLPEJCDCBH__GIENGNEGHPJ(pHVar1,(MethodInfo *)0x0);
    pHVar1 = (__this->fields).KMFFEHGLKOC;
    if ((pHVar1 != (HHLPEJCDCBH_o *)0x0) &&
       (pUVar2 = (__this->fields).BMEKEGAGFGD, pUVar2 != (UnityEngine_Mesh_o *)0x0)) {
      UnityEngine_Mesh__set_vertices(pUVar2,(pHVar1->fields).GNIBJEOJOBO,(MethodInfo *)0x0);
      pHVar1 = (__this->fields).KMFFEHGLKOC;
      if ((pHVar1 != (HHLPEJCDCBH_o *)0x0) &&
         (pUVar2 = (__this->fields).BMEKEGAGFGD, pUVar2 != (UnityEngine_Mesh_o *)0x0)) {
        UnityEngine_Mesh__set_triangles(pUVar2,(pHVar1->fields).KIDEMGIBKHC,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

