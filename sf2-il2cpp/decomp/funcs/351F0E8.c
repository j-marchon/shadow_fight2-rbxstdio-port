// IHIFNKAMALG$$MGFGGIPGFNJ @ RVA 0x351F0E8

void IHIFNKAMALG__MGFGGIPGFNJ
               (IHIFNKAMALG_o *__this,UnityEngine_UIVertex_array *AJLBDPAPMCD,int32_t OGPGLGPMEPD,
               MethodInfo *method)

{
  UnityEngine_Vector3_o *pUVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  
                    /* try { // try from 0361f0f0 to 0371f15f has its CatchHandler @ 0361f174 */
  if (AJLBDPAPMCD == (UnityEngine_UIVertex_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_01bab8c8();
  }
  fVar2 = (__this->fields).BLEOKMIDGIK.fields.x;
  fVar3 = (__this->fields).BLEOKMIDGIK.fields.y;
  if ((uint)OGPGLGPMEPD < (uint)AJLBDPAPMCD->max_length) {
    (&AJLBDPAPMCD->m_Items[0].fields.position)[(long)OGPGLGPMEPD * 9].fields.z =
         (__this->fields).BLEOKMIDGIK.fields.z;
    pUVar1 = &AJLBDPAPMCD->m_Items[0].fields.position + (long)OGPGLGPMEPD * 9;
    (pUVar1->fields).x = fVar2;
    (pUVar1->fields).y = fVar3;
    fVar2 = (__this->fields).IEPAILIKIEM.fields.x;
    fVar3 = (__this->fields).IEPAILIKIEM.fields.y;
    (&AJLBDPAPMCD->m_Items[0].fields.normal)[(long)OGPGLGPMEPD * 9].fields.z =
         (__this->fields).IEPAILIKIEM.fields.z;
    pUVar1 = &AJLBDPAPMCD->m_Items[0].fields.normal + (long)OGPGLGPMEPD * 9;
    (pUVar1->fields).x = fVar2;
    (pUVar1->fields).y = fVar3;
    *(int32_t *)((long)&AJLBDPAPMCD->m_Items[0].fields.color + (long)OGPGLGPMEPD * 0x6c) =
         (__this->fields).EFJKPCADGJH.fields.rgba;
    uVar4 = *(undefined8 *)&(__this->fields).EFJKPCADGJH.fields.r;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv0 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.color + (long)OGPGLGPMEPD * 0x6c + 4) =
         uVar4;
    uVar4 = *(undefined8 *)&(__this->fields).EOJKMBCIECH.fields.y;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv1 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv0 + (long)OGPGLGPMEPD * 0x6c + 0xc) =
         uVar4;
    uVar4 = *(undefined8 *)&(__this->fields).IPOCGMIGMNO.fields.y;
                    /* try { // try from 0361f160 to 0371f16b has its CatchHandler @ 0361e3e4 */
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv2 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv1 + (long)OGPGLGPMEPD * 0x6c + 0xc) =
         uVar4;
    uVar4 = *(undefined8 *)&(__this->fields).FBGEPDAJILH.fields.y;
                    /* try { // try from 0361f16c to 0371f173 has its CatchHandler @ 0361f174 */
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv3 + (long)OGPGLGPMEPD * 0x6c + 4) = 0;
    *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.uv2 + (long)OGPGLGPMEPD * 0x6c + 0xc) =
         uVar4;
                    /* catch() { ... } // from try @ 0361f038 with catch @ 0361f174
                       catch() { ... } // from try @ 0361f090 with catch @ 0361f174
                       catch() { ... } // from try @ 0361f0f0 with catch @ 0361f174
                       catch() { ... } // from try @ 0361f16c with catch @ 0361f174 */
    uVar4 = *(undefined8 *)&(__this->fields).AEBBFLGHGJC.fields.y;
    if ((uint)OGPGLGPMEPD < (uint)AJLBDPAPMCD->max_length) {
      *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.tangent + (long)OGPGLGPMEPD * 0x6c + 8)
           = *(undefined8 *)&(__this->fields).JLJGJDCMODE.fields.y;
      *(undefined8 *)((long)&AJLBDPAPMCD->m_Items[0].fields.tangent + (long)OGPGLGPMEPD * 0x6c) =
           uVar4;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01bab8d0();
}

