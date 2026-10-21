// Nekki.SF2.Core.Scripts.InvertCamera$$OnPreCull @ RVA 0x3581C44

void Nekki_SF2_Core_Scripts_InvertCamera__OnPreCull
               (Nekki_SF2_Core_Scripts_InvertCamera_o *__this,MethodInfo *method)

{
  UnityEngine_Camera_o *pUVar1;
  UnityEngine_Camera_o *__this_00;
  UnityEngine_Matrix4x4_Fields local_1b0;
  UnityEngine_Matrix4x4_Fields local_170;
  UnityEngine_Matrix4x4_Fields local_130;
  UnityEngine_Matrix4x4_Fields local_f0;
  UnityEngine_Matrix4x4_Fields local_b0;
  UnityEngine_Matrix4x4_Fields local_70;
  
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681c3c with catch @ 03681c44
                        */
                    /* catch(type#1 @ 03f99f68) { ... } // from try @ 03681bf8 with catch @ 03681c48
                        */
                    /* try { // try from 03681c60 to 03781c63 has its CatchHandler @ 03681c8c */
                    /* try { // try from 03681c64 to 03781c9b has its CatchHandler @ 03681b5c */
  if ((DAT_04568cd5 & 1) == 0) {
    FUN_01bab630(&Method_UnityEngine_Component_GetComponent<Camera>__);
    DAT_04568cd5 = 1;
  }
  pUVar1 = (UnityEngine_Camera_o *)
           UnityEngine_Component__GetComponent<object>
                     ((UnityEngine_Component_o *)__this,
                      Method_UnityEngine_Component_GetComponent<Camera>__);
                    /* catch() { ... } // from try @ 03681c60 with catch @ 03681c8c */
  if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
    UnityEngine_Camera__ResetWorldToCameraMatrix(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 03681c9c to 03781ca3 has its CatchHandler @ 03681cb8 */
    pUVar1 = (UnityEngine_Camera_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this,
                        Method_UnityEngine_Component_GetComponent<Camera>__);
                    /* try { // try from 03681ca4 to 03781caf has its CatchHandler @ 03681b5c */
    if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
      UnityEngine_Camera__ResetProjectionMatrix(pUVar1,(MethodInfo *)0x0);
                    /* try { // try from 03681cb0 to 03781cb7 has its CatchHandler @ 03681cb8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 03681c9c with catch @ 03681cb8
                       catch(type#2 @ 00000000) { ... } // from try @ 03681cb0 with catch @ 03681cb8
                        */
      pUVar1 = (UnityEngine_Camera_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)__this,
                          Method_UnityEngine_Component_GetComponent<Camera>__);
      __this_00 = (UnityEngine_Camera_o *)
                  UnityEngine_Component__GetComponent<object>
                            ((UnityEngine_Component_o *)__this,
                             Method_UnityEngine_Component_GetComponent<Camera>__);
      if (__this_00 != (UnityEngine_Camera_o *)0x0) {
        UnityEngine_Camera__get_projectionMatrix
                  ((UnityEngine_Matrix4x4_o *)&local_b0,__this_00,(MethodInfo *)0x0);
        local_70.m20 = local_b0.m20;
        local_70.m30 = local_b0.m30;
        local_70.m00 = local_b0.m00;
        local_70.m10 = local_b0.m10;
        local_70.m21 = local_b0.m21;
        local_70.m31 = local_b0.m31;
        local_70.m01 = local_b0.m01;
        local_70.m11 = local_b0.m11;
        local_70.m22 = local_b0.m22;
        local_70.m32 = local_b0.m32;
        local_70.m02 = local_b0.m02;
        local_70.m12 = local_b0.m12;
        local_70.m23 = local_b0.m23;
        local_70.m33 = local_b0.m33;
        local_70.m03 = local_b0.m03;
        local_70.m13 = local_b0.m13;
        UnityEngine_Matrix4x4__Scale
                  ((UnityEngine_Matrix4x4_o *)&local_b0,
                   (UnityEngine_Vector3_o)(__this->fields)._Scale.fields,(MethodInfo *)0x0);
        local_170.m20 = local_b0.m20;
        local_170.m30 = local_b0.m30;
        local_170.m00 = local_b0.m00;
        local_170.m10 = local_b0.m10;
        local_170.m21 = local_b0.m21;
        local_170.m31 = local_b0.m31;
        local_170.m01 = local_b0.m01;
        local_170.m11 = local_b0.m11;
        local_170.m22 = local_b0.m22;
        local_170.m32 = local_b0.m32;
        local_170.m02 = local_b0.m02;
        local_170.m12 = local_b0.m12;
        local_170.m23 = local_b0.m23;
        local_170.m33 = local_b0.m33;
        local_170.m03 = local_b0.m03;
        local_170.m13 = local_b0.m13;
        local_130.m20 = local_70.m20;
        local_130.m30 = local_70.m30;
        local_130.m00 = local_70.m00;
        local_130.m10 = local_70.m10;
        local_130.m21 = local_70.m21;
        local_130.m31 = local_70.m31;
        local_130.m01 = local_70.m01;
        local_130.m11 = local_70.m11;
        local_130.m22 = local_70.m22;
        local_130.m32 = local_70.m32;
        local_130.m02 = local_70.m02;
        local_130.m12 = local_70.m12;
        local_130.m23 = local_70.m23;
        local_130.m33 = local_70.m33;
        local_130.m03 = local_70.m03;
        local_130.m13 = local_70.m13;
        UnityEngine_Matrix4x4__op_Multiply
                  ((UnityEngine_Matrix4x4_o *)&local_f0,(UnityEngine_Matrix4x4_o *)&local_130,
                   (UnityEngine_Matrix4x4_o *)&local_170,(MethodInfo *)0x0);
        local_b0.m20 = local_f0.m20;
        local_b0.m30 = local_f0.m30;
        local_b0.m00 = local_f0.m00;
        local_b0.m10 = local_f0.m10;
        local_b0.m21 = local_f0.m21;
        local_b0.m31 = local_f0.m31;
        local_b0.m01 = local_f0.m01;
        local_b0.m11 = local_f0.m11;
        local_b0.m22 = local_f0.m22;
        local_b0.m32 = local_f0.m32;
        local_b0.m02 = local_f0.m02;
        local_b0.m12 = local_f0.m12;
        local_b0.m23 = local_f0.m23;
        local_b0.m33 = local_f0.m33;
        local_b0.m03 = local_f0.m03;
        local_b0.m13 = local_f0.m13;
        if (pUVar1 != (UnityEngine_Camera_o *)0x0) {
          local_1b0.m20 = local_f0.m20;
          local_1b0.m30 = local_f0.m30;
          local_1b0.m00 = local_f0.m00;
          local_1b0.m10 = local_f0.m10;
          local_1b0.m21 = local_f0.m21;
          local_1b0.m31 = local_f0.m31;
          local_1b0.m01 = local_f0.m01;
          local_1b0.m11 = local_f0.m11;
          local_1b0.m22 = local_f0.m22;
          local_1b0.m32 = local_f0.m32;
          local_1b0.m02 = local_f0.m02;
          local_1b0.m12 = local_f0.m12;
          local_1b0.m23 = local_f0.m23;
          local_1b0.m33 = local_f0.m33;
          local_1b0.m03 = local_f0.m03;
          local_1b0.m13 = local_f0.m13;
          UnityEngine_Camera__set_projectionMatrix
                    (pUVar1,(UnityEngine_Matrix4x4_o *)&local_1b0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8c8();
}

