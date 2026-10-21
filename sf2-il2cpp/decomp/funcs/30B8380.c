// Nekki.SF2.GUI.TextPic$$LocalAlignedTextMeshLastLineBounds_Anchored @ RVA 0x30B8380

/* WARNING: Type propagation algorithm not settling */

UnityEngine_Vector3_o
Nekki_SF2_GUI_TextPic__LocalAlignedTextMeshLastLineBounds_Anchored
          (Nekki_SF2_GUI_TextPic_o *__this,int32_t POJKEOPHOAI,MethodInfo *method)

{
  UnityEngine_Vector3_Fields UVar1;
  UnityEngine_Bounds_o local_60;
  UnityEngine_Bounds_o local_48;
  
  if ((DAT_04566207 & 1) == 0) {
    FUN_01bab630(&Method_DJNBJHPDKDP_KIKGKKGDCKK<Bounds>__);
    DAT_04566207 = 1;
  }
  DJNBJHPDKDP__KIKGKKGDCKK<Bounds>
            (&local_48,
             *(System_Collections_Generic_List_T__o **)
              &(__this->fields)._CDKHEGGEFOC_k__BackingField.fields.m_Extents.fields.y,
             Method_DJNBJHPDKDP_KIKGKKGDCKK<Bounds>__);
  local_60.fields.m_Center.fields.z = local_48.fields.m_Center.fields.z;
  local_60.fields.m_Extents.fields.x = local_48.fields.m_Extents.fields.x;
  local_60.fields.m_Center.fields.x = local_48.fields.m_Center.fields.x;
  local_60.fields.m_Center.fields.y = local_48.fields.m_Center.fields.y;
  local_60.fields.m_Extents.fields.y = local_48.fields.m_Extents.fields.y;
  local_60.fields.m_Extents.fields.z = local_48.fields.m_Extents.fields.z;
  UVar1 = (UnityEngine_Vector3_Fields)
          OMANDMDCGMF__OIMANFCDDIJ(POJKEOPHOAI,&local_60,(MethodInfo *)0x0);
  return (UnityEngine_Vector3_o)UVar1;
}

