/// <summary>
/// �J�����𐧌䂷��N���X
/// </summary>
#pragma once

#include <d3d11_1.h>
#include <SimpleMath.h>

class Camera
{
public:
	Camera(int width, int height);

	virtual ~Camera();

	// �X�V
	virtual void Update();

	// �r���[�s��̎擾
	const DirectX::SimpleMath::Matrix& GetView();

	// �ˉe�s��̎擾
	const DirectX::SimpleMath::Matrix& GetProj();

	// ���_���W�̃Z�b�g
	void SetEyePos(const DirectX::SimpleMath::Vector3& eyepos);

	// �Q�Ɠ_���W�̃Z�b�g
	void SetRefPos(const DirectX::SimpleMath::Vector3& refpos);

	// ������x�N�g���̃Z�b�g
	void SetUpVec(const DirectX::SimpleMath::Vector3& upvec);

	// ������������p�̃Z�b�g
	void SetFovY(float fovY);

	// ������������p�̃Z�b�g
	void SetAspect(float aspect);

	// ������������p�̃Z�b�g
	void SetNearClip(float nearclip);

	// ������������p�̃Z�b�g
	void SetFarClip(float farclip);

protected:
	// �J�����̈ʒu�i���_���W�j
	DirectX::SimpleMath::Vector3 m_eyepos;
	// �J�����̌��Ă����(�����_/�Q�Ɠ_)
	DirectX::SimpleMath::Vector3 m_refpos;
	// �J�����̏�����x�N�g��
	DirectX::SimpleMath::Vector3 m_upvec;
	// �r���[�s��
	DirectX::SimpleMath::Matrix m_view;
	// ������������p
	float m_fovY;
	// �A�X�y�N�g��i���c�̔䗦�j
	float m_aspect;
	// �j�A�N���b�v�i��O�̕\�����E�����j
	float m_nearclip;
	// �t�@�[�N���b�v�i���̕\�����E�����j
	float m_farclip;
	// �ˉe�s��
	DirectX::SimpleMath::Matrix m_proj;
};